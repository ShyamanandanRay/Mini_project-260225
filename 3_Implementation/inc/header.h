#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @file header.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */


#ifndef _HEADER_H
#define _HEADER_H_


/**
 * @brief Structure for movie tickets
 * 
 */
struct book
{
	char code[2000];
	char name[2000];
	char date[2000];
	int cost;
	

}b;

/**
 * @brief login for user and admin
 * 
 */
void login();

/**
 * @brief for insertinf movie details
 * 
 */

void insert_details();

/**
 * @brief to view all data
 * 
 */

void viewAll();

/**
 * @brief for finding data
 * 
 */

void find();

/**
 * @brief to book tickets
 * 
 */

void book_ticket();

/**
 * @brief to view old records of users, booked tickets
 * 
 */

void old_record();

void front();

#endif