
undefined4 FUN_100961aaa(undefined8 param_1,int *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_34 = 0xffffffff;
  }
  else {
    if (param_2[1] <= *param_2) {
      iVar1 = param_2[1];
      lVar2 = (*(code *)_xmlRealloc)(*(undefined8 *)(param_2 + 2),(long)(iVar1 * 2) * 8);
      if (lVar2 == 0) {
        FUN_100960d45(param_1,"adding states\n");
        return 0xffffffff;
      }
      *(long *)(param_2 + 2) = lVar2;
      param_2[1] = iVar1 * 2;
    }
    iVar1 = *param_2;
    *(long *)(*(long *)(param_2 + 2) + (long)iVar1 * 8) = param_3;
    *param_2 = iVar1 + 1;
    local_34 = 1;
  }
  return local_34;
}

