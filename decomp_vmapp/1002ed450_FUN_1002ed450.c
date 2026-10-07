
undefined4 FUN_1002ed450(long *param_1,long param_2)

{
  ushort *puVar1;
  long *plVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+CMD(dcid:%04x, scid:%04x) %s",
                  *(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),
                  "Disconnection Response");
  }
  QMutex::lock();
  plVar2 = (long *)param_1[4];
  if (*(uint *)(plVar2 + 4) != 0) {
    puVar1 = (ushort *)(param_2 + 0xc);
    uVar6 = *(uint *)((long)plVar2 + 0x24) ^ (uint)*puVar1;
    plVar4 = *(long **)(plVar2[1] + ((ulong)uVar6 % (ulong)*(uint *)(plVar2 + 4)) * 8);
    if (plVar4 != plVar2) {
      do {
        if ((*(uint *)(plVar4 + 1) == uVar6) && (*puVar1 == *(ushort *)((long)plVar4 + 0xc))) {
          if (plVar4 != plVar2) {
            lVar5 = FUN_1002ee4c0(param_1 + 4,puVar1);
            FUN_100253100(*param_1 + 0x40,*(undefined8 *)(lVar5 + 8));
            uVar3 = 0;
            FUN_1002ee960(param_1 + 4,puVar1);
            goto LAB_1002ed548;
          }
          break;
        }
        plVar4 = (long *)*plVar4;
      } while (plVar4 != plVar2);
    }
  }
  uVar3 = FUN_1002eda20(param_1,param_2,2);
LAB_1002ed548:
  QMutex::unlock();
  return uVar3;
}

