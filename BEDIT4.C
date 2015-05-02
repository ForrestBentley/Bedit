/*************************************************************************/
/* Program          : BEDIT4.c                   v1.4                    */
/* Author           : Forrest Bentley                                    */
/* Date Written     : January 15, 1992                                   */
/*                                                                       */
/* Description      :                                                    */
/*     This program will process all commands in an input command file.  */
/*                                                                       */
/*************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
//#include <graph.h>
#include <time.h>
#include <string.h>
#include <MALLOC.h>
#include <conio.h>
#include <io.h>
#include <errno.h>
#include <direct.h>
#include <signal.h>

#include "BEDIT.h"
#include "BEDITvar.h"

/********************************************************************/
/* This module will :                                               */
/*     process WINDOW commands                                      */
/********************************************************************/
void w100_test_beditwin () {
    Beditwin = 'n';
    return;
}

/********************************************************************/
/* This module will :                                               */
/*     process WINDOW commands                                      */
/********************************************************************/
void w100_window () {
    strcpy (Error, "Use BEDITWIN for WINDOW commands");
    z110_fatal ();
    c120_parse_command ();
    if  ((strcmp (Command, "START") == 0) ||
         (strcmp (Command, "start") == 0)) {
        w110_window_start ();
        return;
    }
    if  ((strcmp (Command, "STOP") == 0) ||
         (strcmp (Command, "stop") == 0)) {
        w110_window_start ();
        return;
    }
    w110_window_start ();
    return;
}

/********************************************************************/
/* This module will :                                               */
/*     process a WINDOW START                                       */
/********************************************************************/
void w110_window_start () {
    return;
}

/********************************************************************/
/* This module will :                                               */
/*     process a WINDOW STOP                                        */
/********************************************************************/
void w120_window_stop () {
    return;
}

/********************************************************************/
/* This module will :                                               */
/*     return (the real processing is in BEDIT4pm.c                 */
/********************************************************************/
void z111_fatal_message () {
    return;
}


/************************************************************************/
/*                                                                      */
/*                         End of program BEDIT4.c                      */
/*                                                                      */
/************************************************************************/
/* Formatted on 09/21/90 at 14:24:23 by Forrest Bentley's C-Format v1.4 */
