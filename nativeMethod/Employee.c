/*************************************************************************
	> File Name: Employee.c
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 四  5/18 00:22:58 2017
 ************************************************************************/
#include "Employee.h"
#include "stdio.h"

JNIEXPORT void JNICALL Java_Employee_raiseSalary(JNIEnv * env, jobject this_obj, jdouble byPercent){
	//get the class
	jclass class_Employee =(*env)->GetObjectClass(env, this_obj);
	jfieldID id_salary=(*env)->GetFieldID(env, class_Employee, "salary","D");
	jdouble salary=(*env)->GetDoubleField(env, this_obj,id_salary);
	salary*=1+byPercent/100;
	(*env)->SetDoubleField(env, this_obj, id_salary, salary);
}

