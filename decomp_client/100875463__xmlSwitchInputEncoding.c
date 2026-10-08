
undefined4 _xmlSwitchInputEncoding(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  xmlBufferPtr pxVar5;
  uint len;
  int local_28;
  
  if (param_3 == (long *)0x0) {
    return 0xffffffff;
  }
  if (param_2 != (long *)0x0) {
    if (*param_2 == 0) {
      if (((int)param_2[6] != 0) && (*param_2 != 0)) {
        lVar1 = param_2[4];
        lVar2 = param_2[3];
        lVar3 = *param_2;
        pxVar5 = _xmlBufferCreate();
        *(xmlBufferPtr *)(lVar3 + 0x28) = pxVar5;
        _xmlBufferAdd(*(xmlBufferPtr *)(*param_2 + 0x28),(xmlChar *)param_2[4],
                      (int)param_2[6] - ((int)lVar1 - (int)lVar2));
        lVar1 = *param_2;
        pxVar5 = _xmlBufferCreate();
        *(xmlBufferPtr *)(lVar1 + 0x20) = pxVar5;
        iVar4 = _xmlCharEncInFunc(*(xmlCharEncodingHandler **)(*param_2 + 0x18),
                                  *(xmlBufferPtr *)(*param_2 + 0x20),
                                  *(xmlBufferPtr *)(*param_2 + 0x28));
        if (iVar4 < 0) {
          FUN_1008734ff(param_1,"switching encoding: encoder error\n",0);
          return 0xffffffff;
        }
        if ((param_2[9] != 0) && (param_2[3] != 0)) {
          (*(code *)param_2[9])(param_2[3]);
        }
        param_2[4] = **(long **)(*param_2 + 0x20);
        param_2[3] = param_2[4];
        param_2[5] = param_2[3] + (ulong)*(uint *)(*(long *)(*param_2 + 0x20) + 8);
        return 0;
      }
      FUN_1008734ff(param_1,"switching encoding : no input\n",0);
      return 0xffffffff;
    }
    if (*(long *)(*param_2 + 0x18) != 0) {
      if (*(long **)(*param_2 + 0x18) == param_3) {
        return 0;
      }
      _xmlCharEncCloseFunc(*(xmlCharEncodingHandler **)(*param_2 + 0x18));
      *(long **)(*param_2 + 0x18) = param_3;
      return 0;
    }
    *(long **)(*param_2 + 0x18) = param_3;
    if ((*(long *)(*param_2 + 0x20) != 0) && (*(int *)(*(long *)(*param_2 + 0x20) + 8) != 0)) {
      if ((*param_3 != 0) &&
         ((((iVar4 = _strcmp((char *)*param_3,"UTF-16LE"), iVar4 == 0 ||
            (iVar4 = _strcmp((char *)*param_3,"UTF-16"), iVar4 == 0)) && (*(char *)param_2[4] == -1)
           ) && (*(char *)(param_2[4] + 1) == -2)))) {
        param_2[4] = param_2[4] + 2;
      }
      if (((*param_3 != 0) && (iVar4 = _strcmp((char *)*param_3,"UTF-16BE"), iVar4 == 0)) &&
         ((*(char *)param_2[4] == -2 && (*(char *)(param_2[4] + 1) == -1)))) {
        param_2[4] = param_2[4] + 2;
      }
      if (((*param_3 != 0) && (iVar4 = _strcmp((char *)*param_3,"UTF-8"), iVar4 == 0)) &&
         ((*(char *)param_2[4] == -0x11 &&
          ((*(char *)(param_2[4] + 1) == -0x45 && (*(char *)(param_2[4] + 2) == -0x41)))))) {
        param_2[4] = param_2[4] + 3;
      }
      len = (int)param_2[4] - (int)param_2[3];
      _xmlBufferShrink(*(xmlBufferPtr *)(*param_2 + 0x20),len);
      *(undefined8 *)(*param_2 + 0x28) = *(undefined8 *)(*param_2 + 0x20);
      lVar1 = *param_2;
      pxVar5 = _xmlBufferCreate();
      *(xmlBufferPtr *)(lVar1 + 0x20) = pxVar5;
      *(long *)(*param_2 + 0x38) = (long)(int)len;
      iVar4 = *(int *)(*(long *)(*param_2 + 0x28) + 8);
      if (*(int *)(param_1 + 0x34) == 0) {
        local_28 = _xmlCharEncFirstLine
                             (*(xmlCharEncodingHandler **)(*param_2 + 0x18),
                              *(xmlBufferPtr *)(*param_2 + 0x20),*(xmlBufferPtr *)(*param_2 + 0x28))
        ;
      }
      else {
        local_28 = _xmlCharEncInFunc(*(xmlCharEncodingHandler **)(*param_2 + 0x18),
                                     *(xmlBufferPtr *)(*param_2 + 0x20),
                                     *(xmlBufferPtr *)(*param_2 + 0x28));
      }
      if (local_28 < 0) {
        FUN_1008734ff(param_1,"switching encoding: encoder error\n",0);
        return 0xffffffff;
      }
      *(ulong *)(*param_2 + 0x38) =
           *(long *)(*param_2 + 0x38) +
           (ulong)(uint)(iVar4 - *(int *)(*(long *)(*param_2 + 0x28) + 8));
      param_2[4] = **(long **)(*param_2 + 0x20);
      param_2[3] = param_2[4];
      param_2[5] = param_2[3] + (ulong)*(uint *)(*(long *)(*param_2 + 0x20) + 8);
    }
    return 0;
  }
  return 0xffffffff;
}

