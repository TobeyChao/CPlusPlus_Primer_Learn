#pragma once

// ֻ������������
// ������et2.cpp
extern int index;
extern int fun2();

// ֻ������������
// ������et1.c
// ��Ҫ����extern "C"
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