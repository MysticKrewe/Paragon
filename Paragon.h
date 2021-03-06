/**************************************************************************
 
 Paragon - BSOS code - by Mike from PinballHelp.com
 
 Switch, solenoid, light definitions
 
 Version 0.1.0 - 04/03/21
 
 */

// Solenoids

// original code started at 0, not  sure if we should start at 1?

#define SOL_OUTHOLE           1
#define SOL_KNOCKER           2
#define SOL_SAUCER_TREASURE   3  // saucer behind inline drops 5x
#define SOL_SAUCER_PARAGON    4  // paragon saucer
#define SOL_SAUCER_GOLDEN     5  // golden cliffs saucer
#define SOL_LEFT_SLING        6
#define SOL_RIGHT_SLING       7
#define SOL_LEFT_BUMPER       8
#define SOL_RIGHT_BUMPER      9
#define SOL_BEAST_BUMPER      10 // bottom left pop bumper in beast area
#define SOL_CENTER_BUMPER     11
#define SOL_DROP_INLINE       12
#define SOL_DROP_RIGHT        13
#define SOL_COIN_LOCKOUT      14
#define SOL_FLIPPER_ENABLE    15

// Cabinet Switches
#define SW_CREDIT_RESET       6
#define SW_TILT               7
#define SW_OUTHOLE            8
#define SW_COIN_1             9
#define SW_COIN_2             10
#define SW_COIN_3             11
#define SW_SLAM               16

// Playfield Switches

#define SW_DROP_INLINE_D      1   // 1000 + 3x bonus multiplier
#define SW_DROP_INLINE_C      2   // 1000 + 2x bonus multiplier
#define SW_DROP_INLINE_B      3   // 1000 + bonus advance
#define SW_DROP_INLINE_A      4   // 1000 + bonus advance
#define SW_TREASURE_SAUCER    31  // 5000 + 5x bonus multiplier, lites extra ball, then special - treasure chamber saucer (behind inline drops)

#define SW_DROP_TOP           19   // 500 points
#define SW_DROP_MIDDLE        18   // 500 points
#define SW_DROP_BOTTOM        17   // 500 points - all three down awards 10k, 15k, 20k, 25k, special

#define SW_RIGHT_OUTLANE      22   // 1000 points
#define SW_RIGHT_INLANE       23   // 1000 points
#define SW_PARAGON_SAUCER     24   // paragon saucer - 1 bonus + light letter

#define SW_TOP_ROLLOVER       26   // top center star rollover (500 points + advance bonus)
#define SW_500_REBOUND        27   // 500 point rebound (both left and right)
#define SW_WATERFALL_ROLLOVER 28   // 1000 points + bonus advance, waterfall (right squigly star rollover)
#define SW_UPPER_STANDUP      29   // 10 points + advance bonus, lower center target
#define SW_TOP_STANDUP        30   // 10 points + advance bonus, top center standup target 

#define SW_GOLDEN_SAUCER      32   // golden cliffs saucer (increasing award from 2k+ 2k each time)
#define SW_SPINNER            33   // spinner (100 points, when hit 5x advances bonus)
#define SW_STAR_ROLLOVER      34   // 50 points, top right, upper right star rollover, golden cliffs and drop target rebound switch (advance bonus?)

#define SW_RIGHT_SLING        35   // 500 points - right slingshot
#define SW_LEFT_SLING         36   // 500 points - left slingshot
#define SW_BEAST_BUMPER       37   // 100 points - beast's lair pop bumper lower left
#define SW_CENTER_BUMPER      38   // 100 points
#define SW_RIGHT_BUMPER       39   // 100 points
#define SW_LEFT_BUMPER        40   // 100 points

// Lamp Definitions

#define L_1K_BONUS            0
#define L_2K_BONUS            1
#define L_3K_BONUS            2
#define L_4K_BONUS            3
#define L_5K_BONUS            4
#define L_6K_BONUS            5
#define L_7K_BONUS            6
#define L_8K_BONUS            7
#define L_9K_BONUS            8
#define L_10K_BONUS           9
#define L_20K_BONUS           10
#define L_30K_BONUS           11
#define L_40K_BONUS           12

#define L_10K_DROPS           13
#define L_15K_DROPS           14
#define L_20K_DROPS           15
#define L_25K_DROPS           16
#define L_SPECIAL_DROPS       39

#define L_2X_BONUS            20
#define L_3X_BONUS            21
#define L_5X_BONUS            22

#define L_SAUCER_P            24
#define L_SAUCER_AL           25
#define L_SAUCER_R            26
#define L_SAUCER_AR           27
#define L_SAUCER_G            28
#define L_SAUCER_O            29
#define L_SAUCER_N            30

#define L_SAUCER_SPECIAL      18	// upper right paragon saucer special

#define L_CENTER_P            32
#define L_CENTER_AL           33
#define L_CENTER_R            34
#define L_CENTER_AR           35
#define L_CENTER_G            36
#define L_CENTER_O            37
#define L_CENTER_N            38

#define L_2K_GOLDEN           44
#define L_4K_GOLDEN           45
#define L_6K_GOLDEN           46
#define L_8K_GOLDEN           47
#define L_10K_GOLDEN          58
#define L_20K_GOLDEN          59

#define L_5K_WATER            57
#define L_10K_WATER           56    // or 43 - untested
#define L_WATER_SPECIAL       17

#define L_TREASURE_5X         19          
#define L_TREASURE_SPECIAL    31
#define L_TREASURE_EB         23

#define L_SHOOT_AGAIN         42

#define L_SPINNER_1           52 // 2nd from bottom (bottom one is GI/always on)
#define L_SPINNER_2           53
#define L_SPINNER_3           54
#define L_SPINNER_4           55 // top most light in advance bonus spinner

#define L_CREDIT              43 // untested
 
#define L_BB_MATCH            41
#define L_BB_TILT             51
#define L_BB_GAME_OVER        50
#define L_BB_HIGH_SCORE       49
#define L_BB_BALL_IN_PLAY     48
#define L_BB_SHOOT_AGAIN      40

// define renames to match BSOS standards

#define MATCH                   L_BB_MATCH
#define SAME_PLAYER             L_BB_SHOOT_AGAIN
#define EXTRA_BALL              L_SHOOT_AGAIN
#define BALL_IN_PLAY            L_BB_BALL_IN_PLAY
#define HIGH_SCORE              L_BB_HIGH_SCORE
#define GAME_OVER               L_BB_GAME_OVER
#define TILT                    L_BB_TILT
#define PLAYER_1_UP             0
#define PLAYER_2_UP             0
#define PLAYER_3_UP             0
#define PLAYER_4_UP             0


// SWITCHES_WITH_TRIGGERS are for switches that will automatically
// activate a solenoid (like in the case of a chime that rings on a rollover)
// but SWITCHES_WITH_TRIGGERS are fully debounced before being activated
#define NUM_SWITCHES_WITH_TRIGGERS         6    //

// PRIORITY_SWITCHES_WITH_TRIGGERS are switches that trigger immediately
// (like for pop bumpers or slings) - they are not debounced completely
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 6

// Define automatic solenoid triggers (switch, solenoid, number of 1/120ths of a second to fire)
struct PlayfieldAndCabinetSwitch TriggeredSwitches[] = {
  { SW_BEAST_BUMPER, SOL_BEAST_BUMPER, 4 },
  { SW_CENTER_BUMPER, SOL_CENTER_BUMPER, 4 },
  { SW_RIGHT_BUMPER, SOL_RIGHT_BUMPER, 4 },
  { SW_LEFT_BUMPER, SOL_LEFT_BUMPER, 4 },
  { SW_LEFT_SLING, SOL_LEFT_SLING, 4 },
  { SW_RIGHT_SLING, SOL_RIGHT_SLING, 4 },
};
