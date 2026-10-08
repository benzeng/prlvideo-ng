
undefined4 * _xmlXPtrNewRangeNodeObject(long param_1,int *param_2)

{
  int iVar1;
  xmlGenericErrorFunc pxVar2;
  xmlGenericErrorFunc *ppxVar3;
  void **ppvVar4;
  undefined4 *local_48;
  
  if (param_1 == 0) {
    local_48 = (undefined4 *)0x0;
  }
  else if (param_2 == (int *)0x0) {
    local_48 = (undefined4 *)0x0;
  }
  else {
    iVar1 = *param_2;
    if (iVar1 == 1) {
      if (**(int **)(param_2 + 2) < 1) {
        return (undefined4 *)0x0;
      }
    }
    else if ((iVar1 == 0) || (1 < iVar1 - 5U)) {
      return (undefined4 *)0x0;
    }
    local_48 = (undefined4 *)(*(code *)_xmlMalloc)(0x48);
    if (local_48 == (undefined4 *)0x0) {
      FUN_1008f21a1("allocating range");
      local_48 = (undefined4 *)0x0;
    }
    else {
      _memset(local_48,0,0x48);
      *local_48 = 6;
      *(long *)(local_48 + 10) = param_1;
      local_48[0xc] = 0xffffffff;
      iVar1 = *param_2;
      if (iVar1 == 5) {
        *(undefined8 *)(local_48 + 0xe) = *(undefined8 *)(param_2 + 10);
        local_48[0x10] = param_2[0xc];
      }
      else if (iVar1 == 6) {
        *(undefined8 *)(local_48 + 0xe) = *(undefined8 *)(param_2 + 0xe);
        local_48[0x10] = param_2[0x10];
      }
      else {
        if (iVar1 != 1) {
          ppxVar3 = ___xmlGenericError();
          pxVar2 = *ppxVar3;
          ppvVar4 = ___xmlGenericErrorContext();
          (*pxVar2)(*ppvVar4,"Internal error at %s:%d\n","xpointer.c",0x24e);
          return (undefined4 *)0x0;
        }
        *(undefined8 *)(local_48 + 0xe) =
             *(undefined8 *)
              (*(long *)(*(long *)(param_2 + 2) + 8) + (long)**(int **)(param_2 + 2) * 8 + -8);
        local_48[0x10] = 0xffffffff;
      }
      FUN_1008f272a(local_48);
    }
  }
  return local_48;
}

