
long * FUN_100287910(long *param_1,QString *param_2,uint *param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  
  lVar1 = *param_1;
  uVar4 = *(uint *)(lVar1 + 0x20);
  plVar5 = param_1;
  if ((param_3 != (uint *)0x0) || (uVar4 != 0)) {
    uVar3 = qHash(param_2,*(uint *)(lVar1 + 0x24));
    uVar3 = (uVar3 << 0x10 | uVar3 >> 0x10) ^ *(uint *)&param_2[1].field0_0x0;
    if (param_3 != (uint *)0x0) {
      *param_3 = uVar3;
      uVar4 = *(uint *)(lVar1 + 0x20);
    }
    if (uVar4 != 0) {
      plVar5 = (long *)(*(long *)(lVar1 + 8) + ((ulong)uVar3 % (ulong)uVar4) * 8);
      lVar6 = *(long *)(*(long *)(lVar1 + 8) + ((ulong)uVar3 % (ulong)uVar4) * 8);
      if (lVar6 != lVar1) {
        do {
          if (((*(uint *)(lVar6 + 8) == uVar3) &&
              (cVar2 = operator==(param_2,(QString *)(lVar6 + 0x10)), cVar2 != '\0')) &&
             (*(int *)&param_2[1].field0_0x0 == *(int *)(lVar6 + 0x18))) {
            return plVar5;
          }
          plVar5 = (long *)*plVar5;
          lVar6 = *plVar5;
        } while (lVar6 != *param_1);
      }
    }
  }
  return plVar5;
}

