//*
//** 
//*** 
//**** 
//***** 
//******
//*****
//****
//***
//**
//*

#include<stdio.h>

void main()

//top part of pattern
{
for(int i=1; i<=6; i++)
{
    for(int j=1; j<=i; j++)
    {
        printf("*");
    }
    printf("\n");
}

//bottom part of pattern
 
 for(int i=6-1; i>=1; i--)
 {
    for(int j=1; j<i; j++)
    {
        printf("*");
    }
    printf("\n");
 }

}