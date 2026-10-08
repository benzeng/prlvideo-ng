
long * FUN_100738f50(long *param_1,QString *param_2,uint *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar1 = *param_1;
  uVar6 = *(uint *)(lVar1 + 0x20);
  plVar5 = param_1;
  if ((param_3 != (uint *)0x0) || (uVar6 != 0)) {
    uVar7 = *(uint *)(lVar1 + 0x24);
    uVar3 = qHash(param_2,uVar7);
    uVar4 = qHash(param_2 + 1,uVar7);
    uVar7 = uVar4 ^ uVar7 ^ (uVar3 << 0x10 | uVar3 >> 0x10);
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar7;
      uVar6 = *(uint *)(lVar1 + 0x20);
    }
    if (uVar6 != 0) {
      plVar5 = (long *)(*(long *)(lVar1 + 8) + ((ulong)uVar7 % (ulong)uVar6) * 8);
      lVar8 = *(long *)(*(long *)(lVar1 + 8) + ((ulong)uVar7 % (ulong)uVar6) * 8);
      if (lVar8 != lVar1) {
        do {
          if (((*(uint *)(lVar8 + 8) == uVar7) &&
              (cVar2 = operator==(param_2,(QString *)(lVar8 + 0x10)), cVar2 != '\0')) &&
             (cVar2 = operator==(param_2 + 1,(QString *)(lVar8 + 0x18)), cVar2 != '\0')) {
            return plVar5;
          }
          plVar5 = (long *)*plVar5;
          lVar8 = *plVar5;
        } while (lVar8 != *param_1);
      }
    }
  }
  return plVar5;
}

