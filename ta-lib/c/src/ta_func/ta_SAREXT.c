/* TA-LIB Copyright (c) 1999-2003, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *  PP       Peter Pudaite
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  120802 MF   Template creation.
 *  150903 PP   Reworked TA_SAR to allow customisation of more SAR params.
 *  210903 MF   Some changes related on first round of tests
 */

/* SAR_ROUNDING is just for test purpose when cross-referencing that
 * function with example from Wilder's book. Wilder is using two
 * decimal rounding for simplification. TA-Lib does not round.
 */
/* #define SAR_ROUNDING(x) x=round_pos_2(x) */
#define SAR_ROUNDING(x)


/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #using <mscorlib.dll>
/* Generated */    #include "Core.h"
/* Generated */    namespace TA { namespace Lib {
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::SAREXT_Lookback( double        optInStartValue_0, /* From 0 to TA_REAL_MAX */
/* Generated */                          double        optInOffsetOnReverse_1, /* From 0 to TA_REAL_MAX */
/* Generated */                          double        optInAccelerationInitLong_2, /* From 0 to TA_REAL_MAX */
/* Generated */                          double        optInAccelerationLong_3, /* From 0 to TA_REAL_MAX */
/* Generated */                          double        optInAccelerationMaxLong_4, /* From 0 to TA_REAL_MAX */
/* Generated */                          double        optInAccelerationInitShort_5, /* From 0 to TA_REAL_MAX */
/* Generated */                          double        optInAccelerationShort_6, /* From 0 to TA_REAL_MAX */
/* Generated */                          double        optInAccelerationMaxShort_7 )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #else
/* Generated */ int TA_SAREXT_Lookback( double        optInStartValue_0, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInOffsetOnReverse_1, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationInitLong_2, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationLong_3, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationMaxLong_4, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationInitShort_5, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationShort_6, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationMaxShort_7 )  /* From 0 to TA_REAL_MAX */
/* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert lookback code here. */
   (void)optInStartValue_0;
   (void)optInOffsetOnReverse_1;
   (void)optInAccelerationInitLong_2;
   (void)optInAccelerationLong_3;
   (void)optInAccelerationMaxLong_4;
   (void)optInAccelerationInitShort_5;
   (void)optInAccelerationShort_6;
   (void)optInAccelerationMaxShort_7;

    /* SAR always sacrifices one price bar to establish the
     * initial extreme price.
     */

   return 1;
}

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/*
 * TA_SAREXT - Parabolic SAR - Extended
 * 
 * Input  = High, Low
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInStartValue_0:(From 0 to TA_REAL_MAX)
 *    Start value and direction. 0 for Auto, >0 for Long, <0 for Short
 * 
 * optInOffsetOnReverse_1:(From 0 to TA_REAL_MAX)
 *    Percent offset added/removed to initial stop on short/long reversal
 * 
 * optInAccelerationInitLong_2:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor initial value for the Long direction
 * 
 * optInAccelerationLong_3:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor for the Long direction
 * 
 * optInAccelerationMaxLong_4:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor maximum value for the Long direction
 * 
 * optInAccelerationInitShort_5:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor initial value for the Short direction
 * 
 * optInAccelerationShort_6:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor for the Short direction
 * 
 * optInAccelerationMaxShort_7:(From 0 to TA_REAL_MAX)
 *    Acceleration Factor maximum value for the Short direction
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum Core::TA_RetCode Core::SAREXT( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     double       inHigh_0 __gc [],
/* Generated */                                     double       inLow_0 __gc [],
/* Generated */                                     double        optInStartValue_0, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInOffsetOnReverse_1, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationInitLong_2, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationLong_3, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationMaxLong_4, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationInitShort_5, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationShort_6, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationMaxShort_7, /* From 0 to TA_REAL_MAX */
/* Generated */                                     [OutAttribute]Int32 *outBegIdx,
/* Generated */                                     [OutAttribute]Int32 *outNbElement,
/* Generated */                                     double        outReal_0 __gc [] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_SAREXT( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       const double inHigh_0[],
/* Generated */                       const double inLow_0[],
/* Generated */                       double        optInStartValue_0, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInOffsetOnReverse_1, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationInitLong_2, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationLong_3, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationMaxLong_4, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationInitShort_5, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationShort_6, /* From 0 to TA_REAL_MAX */
/* Generated */                       double        optInAccelerationMaxShort_7, /* From 0 to TA_REAL_MAX */
/* Generated */                       int          *outBegIdx,
/* Generated */                       int          *outNbElement,
/* Generated */                       double        outReal_0[] )
/* Generated */ #endif
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
{
	/* insert local variable here */
   TA_RetCode retCode;

   int isLong; /* > 0 indicates long. == 0 indicates short */
   int todayIdx, outIdx;

   int tempInt;

   double newHigh, newLow, prevHigh, prevLow;
   double afLong, afShort, ep, sar;
   #if defined( _MANAGED )
      double ep_temp __gc [] = new double __gc [1];
   #else
      double ep_temp[1];
   #endif


/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return TA_OUT_OF_RANGE_START_INDEX;
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return TA_OUT_OF_RANGE_END_INDEX;
/* Generated */ 
/* Generated */    /* Validate the parameters. */
/* Generated */    /* Verify required price component. */
/* Generated */    if(!inHigh_0||!inLow_0)
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInStartValue_0 == TA_REAL_DEFAULT )
/* Generated */       optInStartValue_0 = 0.000000e+0;
/* Generated */    else if( (optInStartValue_0 < 0.000000e+0) ||/* Generated */  (optInStartValue_0 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInOffsetOnReverse_1 == TA_REAL_DEFAULT )
/* Generated */       optInOffsetOnReverse_1 = 0.000000e+0;
/* Generated */    else if( (optInOffsetOnReverse_1 < 0.000000e+0) ||/* Generated */  (optInOffsetOnReverse_1 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInAccelerationInitLong_2 == TA_REAL_DEFAULT )
/* Generated */       optInAccelerationInitLong_2 = 2.000000e-2;
/* Generated */    else if( (optInAccelerationInitLong_2 < 0.000000e+0) ||/* Generated */  (optInAccelerationInitLong_2 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInAccelerationLong_3 == TA_REAL_DEFAULT )
/* Generated */       optInAccelerationLong_3 = 2.000000e-2;
/* Generated */    else if( (optInAccelerationLong_3 < 0.000000e+0) ||/* Generated */  (optInAccelerationLong_3 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInAccelerationMaxLong_4 == TA_REAL_DEFAULT )
/* Generated */       optInAccelerationMaxLong_4 = 2.000000e-1;
/* Generated */    else if( (optInAccelerationMaxLong_4 < 0.000000e+0) ||/* Generated */  (optInAccelerationMaxLong_4 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInAccelerationInitShort_5 == TA_REAL_DEFAULT )
/* Generated */       optInAccelerationInitShort_5 = 2.000000e-2;
/* Generated */    else if( (optInAccelerationInitShort_5 < 0.000000e+0) ||/* Generated */  (optInAccelerationInitShort_5 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInAccelerationShort_6 == TA_REAL_DEFAULT )
/* Generated */       optInAccelerationShort_6 = 2.000000e-2;
/* Generated */    else if( (optInAccelerationShort_6 < 0.000000e+0) ||/* Generated */  (optInAccelerationShort_6 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( optInAccelerationMaxShort_7 == TA_REAL_DEFAULT )
/* Generated */       optInAccelerationMaxShort_7 = 2.000000e-1;
/* Generated */    else if( (optInAccelerationMaxShort_7 < 0.000000e+0) ||/* Generated */  (optInAccelerationMaxShort_7 > 3.000000e+37) )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */    if( outReal_0 == NULL )
/* Generated */       return TA_BAD_PARAM;
/* Generated */ 
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/

   /* Insert TA function code here. */

   /* This function is the same as TA_SAR, except that the caller has
    * greater control on the SAR dynamic and initial state.
    *
    * In additon, the TA_SAREXT returns negative values when the position
    * is short. This allow to distinguish when the SAR do actually reverse.
    */

   /* Implementation of the SAR has been a little bit open to interpretation
    * since Wilder (the original author) did not define a precise algorithm
    * on how to bootstrap the algorithm. Take any existing software application
    * and you will see slight variation on how the algorithm was adapted.
    *
    * What is the initial trade direction? Long or short?
    * ===================================================
    * The interpretation of what should be the initial SAR values is
    * open to interpretation, particularly since the caller to the function
    * does not specify the initial direction of the trade.
    *
    * In TA-Lib, the following default logic is used:
    *  - Calculate +DM and -DM between the first and
    *    second bar. The highest directional indication will
    *    indicate the assumed direction of the trade for the second
    *    price bar. 
    *  - In the case of a high between +DM and -DM,
    *    the direction is LONG by default.
    *
    * What is the initial "extreme point" and thus SAR?
    * =================================================
    * The following shows how different people took different approach:
    *  - Metastock use the first price bar high/low depending of
    *    the direction. No SAR is calculated for the first price
    *    bar.
    *  - Tradestation use the closing price of the second bar. No
    *    SAR are calculated for the first price bar.
    *  - Wilder (the original author) use the SIP from the
    *    previous trade (cannot be implement here since the
    *    direction and length of the previous trade is unknonw).
    *  - The Magazine TASC seems to follow Wilder approach which
    *    is not practical here.
    *
    * TA-Lib "consume" the first price bar and use its high/low as the
    * initial SAR of the second price bar. I found that approach to be
    * the closest to Wilders idea of having the first entry day use
    * the previous extreme point, except that here the extreme point is
    * derived solely from the first price bar. I found the same approach
    * to be used by Metastock.
    *
    *
    * Can I force the initial SAR?
    * ============================
    * Yes. Using the optInStartValue_0 parameter:
    *  optInStartValue_0 >  0 : SAR is long at optInStartValue_0.
    *  optInStartValue_0 <  0 : SAR is short at abs(optInStartValue_0).
    *  
    * And when optInStartValue_0 == 0, the logic is the same as for TA_SAR
    * (See previous two sections).
    */

   /* Identify the minimum number of price bar needed
    * to calculate at least one output.
    *
    * Move up the start index if there is not
    * enough initial data.
    */
   if( startIdx < 1 )
      startIdx = 1;

   /* Make sure there is still something to evaluate. */
   if( startIdx > endIdx )
   {
      *outBegIdx = 0;
      *outNbElement = 0;
      return TA_SUCCESS;
   }   


   /* Check if the acceleration factors are being defined by the user.
    * Make sure the acceleration and maximum are coherent.
    * If not, correct the acceleration.    
    * Default afLong = 0.02
    * Default afShort = 0.02
    */

   afLong = optInAccelerationInitLong_2;
   afShort = optInAccelerationInitShort_5;

   if( afLong > optInAccelerationMaxLong_4 )
      afLong = optInAccelerationInitLong_2 = optInAccelerationMaxLong_4;

   if( optInAccelerationLong_3 > optInAccelerationMaxLong_4 )
      optInAccelerationLong_3 = optInAccelerationMaxLong_4;

   if( afShort > optInAccelerationMaxShort_7) 
      afShort = optInAccelerationInitShort_5 = optInAccelerationMaxShort_7;

   if( optInAccelerationShort_6 > optInAccelerationMaxShort_7 )
      optInAccelerationShort_6 = optInAccelerationMaxShort_7;
      

   /* Initialise SAR calculations */

   if(optInStartValue_0 == 0) /* Default action */
   {
      /* Identify if the initial direction is long or short.
       * (ep is just used as a temp buffer here, the name
       *  of the parameter is not significant).
       */
      retCode = TA_PREFIX(MINUS_DM)( startIdx-1, startIdx, inHigh_0, inLow_0,
                                  1, &tempInt, &tempInt, ep_temp );
      if( ep_temp[0] > 0 )
         isLong = 0;
      else
         isLong = 1;

      if( retCode != TA_SUCCESS )
      {
         *outBegIdx = 0;
         *outNbElement = 0;
         return retCode;
      }
   }
   else if( optInStartValue_0 > 0 ) /* Start Long */
   {
      isLong = 1;
   }
   else /* optInStartValue_0 < 0 => Start Short */
   {
      isLong = 0;
   }

   *outBegIdx = startIdx;
   outIdx = 0;


   /* Write the first SAR. */
   todayIdx = startIdx;

   newHigh = inHigh_0[todayIdx-1];
   newLow  = inLow_0[todayIdx-1];

   SAR_ROUNDING(newHigh);
   SAR_ROUNDING(newLow);

   if(optInStartValue_0 == 0) /* Default action */
   {
      if( isLong )
      {
         ep  = inHigh_0[todayIdx];
         sar = newLow;
      }
      else
      {
         ep  = inLow_0[todayIdx];
         sar = newHigh;
      }
   }
   else if ( optInStartValue_0 > 0 ) /* Start Long at specified value. */
   {
      ep  = inHigh_0[todayIdx];
      sar = optInStartValue_0;
   }
   else /* if optInStartValue_0 < 0 => Start Short at specified value. */
   {
      ep  = inLow_0[todayIdx];
      sar = fabs(optInStartValue_0);
   }


   SAR_ROUNDING(sar);

   /* Cheat on the newLow and newHigh for the
    * first iteration.
    */
   newLow  = inLow_0[todayIdx];
   newHigh = inHigh_0[todayIdx];

   while( todayIdx <= endIdx )
   {
      prevLow  = newLow;
      prevHigh = newHigh;
      newLow  = inLow_0[todayIdx];
      newHigh = inHigh_0[todayIdx];   
      todayIdx++;

      SAR_ROUNDING(newLow);
      SAR_ROUNDING(newHigh);

      if( isLong )
      {  
         /* Switch to short if the low penetrates the SAR value. */
         if( newLow <= sar )
         {
            /* Switch and Overide the SAR with the ep */
            isLong = 0;
            sar = ep;

            /* Make sure the overide SAR is within
             * yesterday's and today's range.
             */
            if( sar < prevHigh )
               sar = prevHigh;            
            if( sar < newHigh )
               sar = newHigh;

            /* Output the overide SAR  */
            if( optInOffsetOnReverse_1 )
               sar += sar * optInOffsetOnReverse_1; 
            outReal_0[outIdx++] = sar;

            /* Adjust afShort and ep */
            afShort = optInAccelerationInitShort_5;
            ep = newLow;
 
            /* Calculate the new SAR */
            sar = sar + afShort * (ep - sar);
            SAR_ROUNDING( sar );

            /* Make sure the new SAR is within
             * yesterday's and today's range.
             */
            if( sar < prevHigh )
               sar = prevHigh;            
            if( sar < newHigh )
               sar = newHigh;
         }
         else
         {
            /* No switch */

            /* Output the SAR (was calculated in the previous iteration) */
            outReal_0[outIdx++] = sar;
 
            /* Adjust afLong and ep. */
            if( newHigh > ep )
            {
               ep = newHigh;
               afLong += optInAccelerationLong_3;
               if( afLong > optInAccelerationMaxLong_4 )
                  afLong = optInAccelerationMaxLong_4;
            }

            /* Calculate the new SAR */
            sar = sar + afLong * (ep - sar);
            SAR_ROUNDING( sar );

            /* Make sure the new SAR is within
             * yesterday's and today's range.
             */
            if( sar > prevLow )
               sar = prevLow;            
            if( sar > newLow )
               sar = newLow;
         }
      }
      else
      {
         /* Switch to long if the high penetrates the SAR value. */
         if( newHigh >= sar )
         {
            /* Switch and Overide the SAR with the ep */
            isLong = 1;
            sar = ep;

            /* Make sure the overide SAR is within
             * yesterday's and today's range.
             */
            if( sar > prevLow )
               sar = prevLow;            
            if( sar > newLow )
               sar = newLow;

            /* Output the overide SAR  */
            if( optInOffsetOnReverse_1 )
               sar -= sar * optInOffsetOnReverse_1;
            outReal_0[outIdx++] = sar;

            /* Adjust afLong and ep */
            afLong = optInAccelerationInitLong_2;
            ep = newHigh;

            /* Calculate the new SAR */
            sar = sar + afLong * (ep - sar);
            SAR_ROUNDING( sar );

            /* Make sure the new SAR is within
             * yesterday's and today's range.
             */
            if( sar > prevLow )
               sar = prevLow;            
            if( sar > newLow )
               sar = newLow;
         }
         else
         {
            /* No switch */

            /* Output the SAR (was calculated in the previous iteration) */
            outReal_0[outIdx++] = -sar;

            /* Adjust afShort and ep. */
            if( newLow < ep )
            {
               ep = newLow;
               afShort += optInAccelerationShort_6;
               if( afShort > optInAccelerationMaxShort_7 )
                  afShort = optInAccelerationMaxShort_7;
            }

            /* Calculate the new SAR */
            sar = sar + afShort * (ep - sar);
            SAR_ROUNDING( sar );

            /* Make sure the new SAR is within
             * yesterday's and today's range.
             */
            if( sar < prevHigh )
               sar = prevHigh;            
            if( sar < newHigh )
               sar = newHigh;
         }
      }
   }

   *outNbElement = outIdx;

   return TA_SUCCESS;
}

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum Core::TA_RetCode Core::SAREXT( int    startIdx,
/* Generated */                                     int    endIdx,
/* Generated */                                     float        inHigh_0 __gc [],
/* Generated */                                     float        inLow_0 __gc [],
/* Generated */                                     double        optInStartValue_0, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInOffsetOnReverse_1, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationInitLong_2, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationLong_3, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationMaxLong_4, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationInitShort_5, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationShort_6, /* From 0 to TA_REAL_MAX */
/* Generated */                                     double        optInAccelerationMaxShort_7, /* From 0 to TA_REAL_MAX */
/* Generated */                                     [OutAttribute]Int32 *outBegIdx,
/* Generated */                                     [OutAttribute]Int32 *outNbElement,
/* Generated */                                     double        outReal_0 __gc [] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_SAREXT( int    startIdx,
/* Generated */                         int    endIdx,
/* Generated */                         const float  inHigh_0[],
/* Generated */                         const float  inLow_0[],
/* Generated */                         double        optInStartValue_0, /* From 0 to TA_REAL_MAX */
/* Generated */                         double        optInOffsetOnReverse_1, /* From 0 to TA_REAL_MAX */
/* Generated */                         double        optInAccelerationInitLong_2, /* From 0 to TA_REAL_MAX */
/* Generated */                         double        optInAccelerationLong_3, /* From 0 to TA_REAL_MAX */
/* Generated */                         double        optInAccelerationMaxLong_4, /* From 0 to TA_REAL_MAX */
/* Generated */                         double        optInAccelerationInitShort_5, /* From 0 to TA_REAL_MAX */
/* Generated */                         double        optInAccelerationShort_6, /* From 0 to TA_REAL_MAX */
/* Generated */                         double        optInAccelerationMaxShort_7, /* From 0 to TA_REAL_MAX */
/* Generated */                         int          *outBegIdx,
/* Generated */                         int          *outNbElement,
/* Generated */                         double        outReal_0[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    TA_RetCode retCode;
/* Generated */    int isLong; 
/* Generated */    int todayIdx, outIdx;
/* Generated */    int tempInt;
/* Generated */    double newHigh, newLow, prevHigh, prevLow;
/* Generated */    double afLong, afShort, ep, sar;
/* Generated */    #if defined( _MANAGED )
/* Generated */       double ep_temp __gc [] = new double __gc [1];
/* Generated */    #else
/* Generated */       double ep_temp[1];
/* Generated */    #endif
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return TA_OUT_OF_RANGE_START_INDEX;
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return TA_OUT_OF_RANGE_END_INDEX;
/* Generated */     if(!inHigh_0||!inLow_0)
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInStartValue_0 == TA_REAL_DEFAULT )
/* Generated */        optInStartValue_0 = 0.000000e+0;
/* Generated */     else if( (optInStartValue_0 < 0.000000e+0) ||  (optInStartValue_0 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInOffsetOnReverse_1 == TA_REAL_DEFAULT )
/* Generated */        optInOffsetOnReverse_1 = 0.000000e+0;
/* Generated */     else if( (optInOffsetOnReverse_1 < 0.000000e+0) ||  (optInOffsetOnReverse_1 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInAccelerationInitLong_2 == TA_REAL_DEFAULT )
/* Generated */        optInAccelerationInitLong_2 = 2.000000e-2;
/* Generated */     else if( (optInAccelerationInitLong_2 < 0.000000e+0) ||  (optInAccelerationInitLong_2 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInAccelerationLong_3 == TA_REAL_DEFAULT )
/* Generated */        optInAccelerationLong_3 = 2.000000e-2;
/* Generated */     else if( (optInAccelerationLong_3 < 0.000000e+0) ||  (optInAccelerationLong_3 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInAccelerationMaxLong_4 == TA_REAL_DEFAULT )
/* Generated */        optInAccelerationMaxLong_4 = 2.000000e-1;
/* Generated */     else if( (optInAccelerationMaxLong_4 < 0.000000e+0) ||  (optInAccelerationMaxLong_4 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInAccelerationInitShort_5 == TA_REAL_DEFAULT )
/* Generated */        optInAccelerationInitShort_5 = 2.000000e-2;
/* Generated */     else if( (optInAccelerationInitShort_5 < 0.000000e+0) ||  (optInAccelerationInitShort_5 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInAccelerationShort_6 == TA_REAL_DEFAULT )
/* Generated */        optInAccelerationShort_6 = 2.000000e-2;
/* Generated */     else if( (optInAccelerationShort_6 < 0.000000e+0) ||  (optInAccelerationShort_6 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( optInAccelerationMaxShort_7 == TA_REAL_DEFAULT )
/* Generated */        optInAccelerationMaxShort_7 = 2.000000e-1;
/* Generated */     else if( (optInAccelerationMaxShort_7 < 0.000000e+0) ||  (optInAccelerationMaxShort_7 > 3.000000e+37) )
/* Generated */        return TA_BAD_PARAM;
/* Generated */     if( outReal_0 == NULL )
/* Generated */        return TA_BAD_PARAM;
/* Generated */  #endif 
/* Generated */    if( startIdx < 1 )
/* Generated */       startIdx = 1;
/* Generated */    if( startIdx > endIdx )
/* Generated */    {
/* Generated */       *outBegIdx = 0;
/* Generated */       *outNbElement = 0;
/* Generated */       return TA_SUCCESS;
/* Generated */    }   
/* Generated */    afLong = optInAccelerationInitLong_2;
/* Generated */    afShort = optInAccelerationInitShort_5;
/* Generated */    if( afLong > optInAccelerationMaxLong_4 )
/* Generated */       afLong = optInAccelerationInitLong_2 = optInAccelerationMaxLong_4;
/* Generated */    if( optInAccelerationLong_3 > optInAccelerationMaxLong_4 )
/* Generated */       optInAccelerationLong_3 = optInAccelerationMaxLong_4;
/* Generated */    if( afShort > optInAccelerationMaxShort_7) 
/* Generated */       afShort = optInAccelerationInitShort_5 = optInAccelerationMaxShort_7;
/* Generated */    if( optInAccelerationShort_6 > optInAccelerationMaxShort_7 )
/* Generated */       optInAccelerationShort_6 = optInAccelerationMaxShort_7;
/* Generated */    if(optInStartValue_0 == 0) 
/* Generated */    {
/* Generated */       retCode = TA_PREFIX(MINUS_DM)( startIdx-1, startIdx, inHigh_0, inLow_0,
/* Generated */                                   1, &tempInt, &tempInt, ep_temp );
/* Generated */       if( ep_temp[0] > 0 )
/* Generated */          isLong = 0;
/* Generated */       else
/* Generated */          isLong = 1;
/* Generated */       if( retCode != TA_SUCCESS )
/* Generated */       {
/* Generated */          *outBegIdx = 0;
/* Generated */          *outNbElement = 0;
/* Generated */          return retCode;
/* Generated */       }
/* Generated */    }
/* Generated */    else if( optInStartValue_0 > 0 ) 
/* Generated */    {
/* Generated */       isLong = 1;
/* Generated */    }
/* Generated */    else 
/* Generated */    {
/* Generated */       isLong = 0;
/* Generated */    }
/* Generated */    *outBegIdx = startIdx;
/* Generated */    outIdx = 0;
/* Generated */    todayIdx = startIdx;
/* Generated */    newHigh = inHigh_0[todayIdx-1];
/* Generated */    newLow  = inLow_0[todayIdx-1];
/* Generated */    SAR_ROUNDING(newHigh);
/* Generated */    SAR_ROUNDING(newLow);
/* Generated */    if(optInStartValue_0 == 0) 
/* Generated */    {
/* Generated */       if( isLong )
/* Generated */       {
/* Generated */          ep  = inHigh_0[todayIdx];
/* Generated */          sar = newLow;
/* Generated */       }
/* Generated */       else
/* Generated */       {
/* Generated */          ep  = inLow_0[todayIdx];
/* Generated */          sar = newHigh;
/* Generated */       }
/* Generated */    }
/* Generated */    else if ( optInStartValue_0 > 0 ) 
/* Generated */    {
/* Generated */       ep  = inHigh_0[todayIdx];
/* Generated */       sar = optInStartValue_0;
/* Generated */    }
/* Generated */    else 
/* Generated */    {
/* Generated */       ep  = inLow_0[todayIdx];
/* Generated */       sar = fabs(optInStartValue_0);
/* Generated */    }
/* Generated */    SAR_ROUNDING(sar);
/* Generated */    newLow  = inLow_0[todayIdx];
/* Generated */    newHigh = inHigh_0[todayIdx];
/* Generated */    while( todayIdx <= endIdx )
/* Generated */    {
/* Generated */       prevLow  = newLow;
/* Generated */       prevHigh = newHigh;
/* Generated */       newLow  = inLow_0[todayIdx];
/* Generated */       newHigh = inHigh_0[todayIdx];   
/* Generated */       todayIdx++;
/* Generated */       SAR_ROUNDING(newLow);
/* Generated */       SAR_ROUNDING(newHigh);
/* Generated */       if( isLong )
/* Generated */       {  
/* Generated */          if( newLow <= sar )
/* Generated */          {
/* Generated */             isLong = 0;
/* Generated */             sar = ep;
/* Generated */             if( sar < prevHigh )
/* Generated */                sar = prevHigh;            
/* Generated */             if( sar < newHigh )
/* Generated */                sar = newHigh;
/* Generated */             if( optInOffsetOnReverse_1 )
/* Generated */                sar += sar * optInOffsetOnReverse_1; 
/* Generated */             outReal_0[outIdx++] = sar;
/* Generated */             afShort = optInAccelerationInitShort_5;
/* Generated */             ep = newLow;
/* Generated */             sar = sar + afShort * (ep - sar);
/* Generated */             SAR_ROUNDING( sar );
/* Generated */             if( sar < prevHigh )
/* Generated */                sar = prevHigh;            
/* Generated */             if( sar < newHigh )
/* Generated */                sar = newHigh;
/* Generated */          }
/* Generated */          else
/* Generated */          {
/* Generated */             outReal_0[outIdx++] = sar;
/* Generated */             if( newHigh > ep )
/* Generated */             {
/* Generated */                ep = newHigh;
/* Generated */                afLong += optInAccelerationLong_3;
/* Generated */                if( afLong > optInAccelerationMaxLong_4 )
/* Generated */                   afLong = optInAccelerationMaxLong_4;
/* Generated */             }
/* Generated */             sar = sar + afLong * (ep - sar);
/* Generated */             SAR_ROUNDING( sar );
/* Generated */             if( sar > prevLow )
/* Generated */                sar = prevLow;            
/* Generated */             if( sar > newLow )
/* Generated */                sar = newLow;
/* Generated */          }
/* Generated */       }
/* Generated */       else
/* Generated */       {
/* Generated */          if( newHigh >= sar )
/* Generated */          {
/* Generated */             isLong = 1;
/* Generated */             sar = ep;
/* Generated */             if( sar > prevLow )
/* Generated */                sar = prevLow;            
/* Generated */             if( sar > newLow )
/* Generated */                sar = newLow;
/* Generated */             if( optInOffsetOnReverse_1 )
/* Generated */                sar -= sar * optInOffsetOnReverse_1;
/* Generated */             outReal_0[outIdx++] = sar;
/* Generated */             afLong = optInAccelerationInitLong_2;
/* Generated */             ep = newHigh;
/* Generated */             sar = sar + afLong * (ep - sar);
/* Generated */             SAR_ROUNDING( sar );
/* Generated */             if( sar > prevLow )
/* Generated */                sar = prevLow;            
/* Generated */             if( sar > newLow )
/* Generated */                sar = newLow;
/* Generated */          }
/* Generated */          else
/* Generated */          {
/* Generated */             outReal_0[outIdx++] = -sar;
/* Generated */             if( newLow < ep )
/* Generated */             {
/* Generated */                ep = newLow;
/* Generated */                afShort += optInAccelerationShort_6;
/* Generated */                if( afShort > optInAccelerationMaxShort_7 )
/* Generated */                   afShort = optInAccelerationMaxShort_7;
/* Generated */             }
/* Generated */             sar = sar + afShort * (ep - sar);
/* Generated */             SAR_ROUNDING( sar );
/* Generated */             if( sar < prevHigh )
/* Generated */                sar = prevHigh;            
/* Generated */             if( sar < newHigh )
/* Generated */                sar = newHigh;
/* Generated */          }
/* Generated */       }
/* Generated */    }
/* Generated */    *outNbElement = outIdx;
/* Generated */    return TA_SUCCESS;
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }} // Close namespace TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/


