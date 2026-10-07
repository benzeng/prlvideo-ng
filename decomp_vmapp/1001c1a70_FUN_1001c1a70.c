
undefined8 FUN_1001c1a70(long param_1,int *param_2)

{
  xmlGenericErrorFunc pxVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_48;
  
  if (param_2 == (int *)0x0) {
    local_48 = 0;
  }
  else if (((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
          (**(long **)(param_1 + 0x18) == 0)) {
    local_48 = 0;
  }
  else if (*param_2 == 5) {
    local_48 = _xmlXPtrNewRange(*(undefined8 *)(param_2 + 10),param_2[0xc],
                                *(undefined8 *)(param_2 + 10),param_2[0xc]);
  }
  else if (*param_2 == 6) {
    if (*(long *)(param_2 + 0xe) == 0) {
      lVar2 = *(long *)(param_2 + 10);
      if (**(long **)(param_1 + 0x18) == lVar2) {
        uVar3 = FUN_1001beb6e(lVar2);
        local_48 = _xmlXPtrNewRange(lVar2,0,lVar2,uVar3);
      }
      else {
        if (*(uint *)(lVar2 + 8) < 0xe) {
          uVar8 = 1L << ((byte)*(uint *)(lVar2 + 8) & 0x3f);
          if ((uVar8 & 0x33ba) != 0) {
            iVar4 = FUN_1001bebe3(lVar2);
            uVar7 = _xmlXPtrNewRange(*(undefined8 *)(lVar2 + 0x28),iVar4 + -1,
                                     *(undefined8 *)(lVar2 + 0x28),iVar4 + 1);
            return uVar7;
          }
          if ((uVar8 & 4) != 0) {
            uVar3 = FUN_1001beb6e(lVar2);
            uVar7 = _xmlXPtrNewRange(lVar2,0,lVar2,uVar3);
            return uVar7;
          }
        }
        local_48 = 0;
      }
    }
    else {
      local_48 = _xmlXPtrNewRange(*(undefined8 *)(param_2 + 10),param_2[0xc],
                                  *(undefined8 *)(param_2 + 0xe),param_2[0x10]);
    }
  }
  else {
    ppxVar5 = ___xmlGenericError();
    pxVar1 = *ppxVar5;
    ppvVar6 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xpointer.c",0x7d7);
    local_48 = 0;
  }
  return local_48;
}

