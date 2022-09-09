
// Marvish Chandra

#include <stdio.h>

public static void kitchen(mealCooked,dirtyArea){
        if mealCooked == true ? false:
            if dirtyArea == "fridge":
                printf("Please clean each of the shelves whether you eat breakfast or not.")
            if dirtyArea == "dining table":
                printf("Please buss the table by first removing everything on it and use a towel and paper to wipe all of the dirt.")
            if dirtyArea == "kitchen sink":
                printf("Clean whatever dishes are inside the sink after you're finished in the kitchen.")
            if dirtyArea == "gas range countertop":
                printf("After finished cooking completely, get a cleaning wipe to clean the gas range in the used area.")
        else: printf("If you plan on using the kitchen, make sure to be clean. If not, continue your normal activities.")
    return 0;
}

public static void bathroom(dirtyArea){
    if dirtyArea == "toilet space":
        printf("At least once a week, make sure to use toilet bowl cleaner to clean the insides of the toilet. Use a mop to clean around the outside areas.")
    if dirtyArea == "shower space":
        printf("Make sure to use bathroom cleaner to clean the tub surface. You can either scrub either bending over and scrubbing or more effectively, a mop to clean.")
    if dirtyArea == "sink":
        printf("You need to remove everything from your sink. Next, use cleaning solution to clean the exterior and interior. Scrub manually using a sponge.")
    else: printf("You can tell if you need to clean the bathroom if there are dust or mold buildup. Routinely clean at least once a week.")
    return 0;
}
public static void myRoom(organizeNeed){
    if organizeNeed == "closet":
        printf("You need to organize all of your clothes. Iron them beforehand and use a hangar for storage.")
    if organizeNeed == "entertainment area":
        printf("You need to remove any litter including: water bottles, soda/beer cans, and food leftovers. Use a deodorizer in your room to remove foul smells and wipe any dirty areas.")
    if organizeNeed == "bed":
        printf("To ensure personal hygiene, you need to wash all of your sheets and wash any clothes if there are in the shared space.")
    else: printf("When using your room, be mindful of litter and be clean. Otherwise, continue your regular routine.")
    return 0;
}
public static void interiorFlooring(isCleaned){
    if isCleaned == false:
        printf("Make sure to vaccum areas that contain carpet, hardwood, or tile. In the spaces that have hardwood or tile, make sure to mop those areas.")
    if isCleaned == true:
        printf("No need to clean this floor, just routinely maintain a few times in the month.")
    return 0;
}
public static void exteriorFront(cobwebs,dirtyGutters,dust){
    if cobwebs == true:
        printf("Grab your longest broom (use a ladder if needed) to brush cobwebs present in the front and back of the home.")
    if cobwebs == false:
        printf("Without presence of cobwebs, routinely maintain the ceilings if there is any other dirt builtup.")
    if dirtyGutters == true:
        printf("Often after rain or in the autumn season, there are leaves builtup. Use a ladder and brush to drop all of the leaves on the ground. From there, broom and dispose.")
    if dust == true:
        printf("You have to get your hose (either located in the front or back of the home), to wash the dust surrounded areas around the home.")
    if dust == false:
        printf("If you notice diminishing colors from your home's surrounding, make sure to repaint based on your home's colors.")
    return 0;
}
public static void garage(floor, autoPresent){
    if floor == "dirty":
        printf("Either get a broom to clean the entire garage and/or wash the entire surface to remove all of the builtup dirt.")
    if autoPresent == true:
        printf("You should routinely wash your auto at least once a month. If you're located in a rural or desert-like area, wash your auto at least twice a month.")
    if autoPresent == false:
        printf("Routinely clean your garage and organize any tools that you might have.")
    else: printf("Make sure your garage is clean routinely by checking for dirt builtup and for any unnecessary debris.")
    return 0;
}
public static void driveWay(isCleaned,foundationStrength){
    if isCleaned == true:
        printf("Your driveway is cleaned based on if there are no debris present and if there is little to no signs of dirt.")
    if isCleaned == false:
        printf("Your driveway must be washed using cleaning solution and manually scrubbing to remove dirt.")
    if foundationStrength == true:
        printf("Your driveway is fundamentally strong if it isn't breaking apart. This is determined if the driveway looks crooked or if there is a lot of removed concrete.")
    if foundationStrength == false:
        printf("You need to bring enough concrete, estimate based on the width and height of the entire thing. Wash and apply concrete mix to the driveway in all areas or areas that need improvement.")
    else: printf("To ensure driveway cleaniness and strength, take time every month to evaluate its condition.")
    return 0;
}
