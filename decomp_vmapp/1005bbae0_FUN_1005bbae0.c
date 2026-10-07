
undefined8 FUN_1005bbae0(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0x38);
  if (lVar8 != param_2 + 0x30) {
    plVar1 = (long *)(param_3 + 8);
    do {
      if ((long *)*plVar1 != (long *)0x0) {
        plVar2 = (long *)(lVar8 + 0x10);
        plVar4 = (long *)*plVar1;
        plVar7 = plVar1;
        do {
          while (plVar6 = plVar4, iVar5 = FUN_1007ea6f0(plVar6 + 4,plVar2), iVar5 < 0) {
            plVar4 = (long *)plVar6[1];
            if ((long *)plVar6[1] == (long *)0x0) goto LAB_1005bbb73;
          }
          plVar7 = plVar6;
          plVar4 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
LAB_1005bbb73:
        if ((plVar7 != plVar1) && (iVar5 = FUN_1007ea6f0(plVar2,plVar7 + 4), -1 < iVar5)) {
          lVar3 = plVar7[6];
          *(long *)(lVar8 + 0x18) = plVar7[7];
          *plVar2 = lVar3;
          FUN_10051afa0(lVar8 + 0x20,plVar7 + 8);
          lVar3 = plVar7[9];
          *(long *)(lVar8 + 0x30) = plVar7[10];
          *(long *)(lVar8 + 0x28) = lVar3;
          QDateTime::operator=((QDateTime *)(lVar8 + 0x38),(QDateTime *)(plVar7 + 0xb));
          if (plVar2 != plVar7 + 6) {
            FUN_1005d5780(lVar8 + 0x40,plVar7[0xd],plVar7 + 0xc,0);
          }
          FUN_1005bbae0(param_1,plVar2,param_3);
        }
      }
      lVar8 = *(long *)(lVar8 + 8);
    } while (lVar8 != param_2 + 0x30);
  }
  return 0;
}

