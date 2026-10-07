
undefined8 FUN_1001c1d9c(long param_1,int *param_2)

{
  xmlGenericErrorFunc pxVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  xmlGenericErrorFunc *ppxVar5;
  void **ppvVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_50;
  
  if (param_2 == (int *)0x0) {
    local_50 = 0;
  }
  else if (((param_1 == 0) || (*(long *)(param_1 + 0x18) == 0)) ||
          (**(long **)(param_1 + 0x18) == 0)) {
    local_50 = 0;
  }
  else if (*param_2 == 5) {
    lVar2 = *(long *)(param_2 + 10);
    if (*(uint *)(lVar2 + 8) < 0xe) {
      uVar8 = 1L << ((byte)*(uint *)(lVar2 + 8) & 0x3f);
      if ((uVar8 & 0x3226) != 0) {
        uVar4 = FUN_1001beb6e(lVar2);
        uVar7 = _xmlXPtrNewRange(lVar2,0,lVar2,uVar4);
        return uVar7;
      }
      if ((uVar8 & 0x198) != 0) {
        if (*(long *)(lVar2 + 0x50) == 0) {
          uVar7 = _xmlXPtrNewRange(lVar2,0,lVar2,0);
          return uVar7;
        }
        iVar3 = _xmlStrlen(*(xmlChar **)(lVar2 + 0x50));
        uVar7 = _xmlXPtrNewRange(lVar2,0,lVar2,iVar3);
        return uVar7;
      }
    }
    local_50 = 0;
  }
  else if (*param_2 == 6) {
    lVar2 = *(long *)(param_2 + 10);
    if (*(long *)(param_2 + 0xe) == 0) {
      if (*(uint *)(lVar2 + 8) < 0xe) {
        uVar8 = 1L << ((byte)*(uint *)(lVar2 + 8) & 0x3f);
        if ((uVar8 & 0x3226) != 0) {
          uVar4 = FUN_1001beb6e(lVar2);
          uVar7 = _xmlXPtrNewRange(lVar2,0,lVar2,uVar4);
          return uVar7;
        }
        if ((uVar8 & 0x198) != 0) {
          if (*(long *)(lVar2 + 0x50) == 0) {
            uVar7 = _xmlXPtrNewRange(lVar2,0,lVar2,0);
            return uVar7;
          }
          iVar3 = _xmlStrlen(*(xmlChar **)(lVar2 + 0x50));
          uVar7 = _xmlXPtrNewRange(lVar2,0,lVar2,iVar3);
          return uVar7;
        }
      }
      local_50 = 0;
    }
    else {
      local_50 = _xmlXPtrNewRange(lVar2,param_2[0xc],*(undefined8 *)(param_2 + 0xe),param_2[0x10]);
    }
  }
  else {
    ppxVar5 = ___xmlGenericError();
    pxVar1 = *ppxVar5;
    ppvVar6 = ___xmlGenericErrorContext();
    (*pxVar1)(*ppvVar6,"Unimplemented block at %s:%d\n","xpointer.c",0x862);
    local_50 = 0;
  }
  return local_50;
}

