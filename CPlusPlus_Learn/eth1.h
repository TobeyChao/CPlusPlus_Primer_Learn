#pragma once

// 只是在这里声明
// 定义在et2.cpp
extern int index;
extern int fun2();

// 只是在这里声明
// 定义在et1.c
// 需要增加extern "C"
extern "C" int i;

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif /* __cplusplus */
	int fun();
#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */ 

extern char a[];