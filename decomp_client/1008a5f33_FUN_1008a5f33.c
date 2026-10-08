
undefined4
FUN_1008a5f33(long *param_1,int *param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  
  if (*param_1 == 0) {
    lVar1 = (*(code *)_xmlMalloc)(0x30);
    *param_1 = lVar1;
    if (*param_1 == 0) {
      FUN_1008991e0("alloc ns map item");
      return 0xffffffff;
    }
    *param_2 = 3;
    *param_3 = 0;
  }
  else if (*param_2 <= *param_3) {
    *param_2 = *param_2 * 2;
    lVar1 = (*(code *)_xmlRealloc)(*param_1,(long)*param_2 << 4);
    *param_1 = lVar1;
    if (*param_1 == 0) {
      FUN_1008991e0("realloc ns map item");
      return 0xffffffff;
    }
  }
  *(undefined8 *)(*param_1 + (long)*param_3 * 0x10) = param_4;
  *(undefined8 *)(*param_1 + (long)*param_3 * 0x10 + 8) = param_5;
  *param_3 = *param_3 + 1;
  return 0;
}

