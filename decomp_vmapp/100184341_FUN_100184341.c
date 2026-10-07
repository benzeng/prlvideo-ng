
undefined4 FUN_100184341(long param_1)

{
  long lVar1;
  undefined4 local_24;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    local_24 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
    lVar1 = *(long *)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x18);
    *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x18) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x18 + 8) = 0;
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x48) == 4)) {
      _xmlRegFreeExecCtxt(*(xmlRegExecCtxtPtr *)
                           (*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x18 + 0x10
                           ));
    }
    *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x18 + 0x10) = 0;
    if (*(int *)(param_1 + 0x50) < 1) {
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    else {
      *(long *)(param_1 + 0x48) =
           *(long *)(param_1 + 0x58) + (long)*(int *)(param_1 + 0x50) * 0x18 + -0x18;
    }
    local_24 = *(undefined4 *)(param_1 + 0x50);
  }
  return local_24;
}

