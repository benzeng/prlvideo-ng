
undefined4 FUN_1002ed220(long *param_1,long param_2)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  long *plVar4;
  ushort *puVar5;
  undefined4 uVar6;
  long *plVar7;
  ushort *puVar8;
  long lVar9;
  uint uVar10;
  
  if (0 < DAT_1011c568c) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+CMD(dcid:%04x, scid:%04x) %s",
                  *(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),
                  "Disconnection Request");
  }
  QMutex::lock();
  plVar4 = (long *)param_1[4];
  if (*(uint *)(plVar4 + 4) != 0) {
    puVar1 = (ushort *)(param_2 + 0xc);
    uVar10 = *(uint *)((long)plVar4 + 0x24) ^ (uint)*puVar1;
    plVar7 = *(long **)(plVar4[1] + ((ulong)uVar10 % (ulong)*(uint *)(plVar4 + 4)) * 8);
    if (plVar7 != plVar4) {
      do {
        if ((*(uint *)(plVar7 + 1) == uVar10) && (*puVar1 == *(ushort *)((long)plVar7 + 0xc))) {
          if (plVar7 != plVar4) {
            puVar8 = (ushort *)FUN_1002ee4c0(param_1 + 4,puVar1);
            FUN_100253100(*param_1 + 0x40,*(undefined8 *)(puVar8 + 4));
            uVar2 = *(undefined1 *)(param_2 + 9);
            uVar3 = *(ushort *)((long)param_1 + 0x16);
            lVar9 = (**(code **)(*(long *)*param_1 + 0x60))
                              ((long *)*param_1,0x82,0x10,FUN_1002df330,0);
            if (lVar9 == 0) {
              uVar6 = 0x20;
              if (-1 < DAT_1011c568c) {
                FUN_1008e3970(&DAT_100b392f0,"USB",0,
                              "[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",uVar3,0xc);
              }
            }
            else {
              puVar5 = *(ushort **)(lVar9 + 0x10);
              *puVar5 = uVar3 & 0xfff | 0x2000;
              puVar5[1] = 0xc;
              uVar6 = 0x20;
              if (puVar5 != (ushort *)0x0) {
                puVar5[3] = 1;
                puVar5[2] = 8;
                *(undefined1 *)(puVar5 + 4) = 7;
                *(undefined1 *)((long)puVar5 + 9) = uVar2;
                puVar5[5] = 4;
                puVar5[6] = puVar8[1];
                puVar5[7] = *puVar8;
                FUN_1002edbe0(param_1,puVar5,"Disconnect Success");
                uVar6 = 0;
                FUN_1002ee960(param_1 + 4,puVar1);
              }
            }
            goto LAB_1002ed3d5;
          }
          break;
        }
        plVar7 = (long *)*plVar7;
      } while (plVar7 != plVar4);
    }
  }
  uVar6 = FUN_1002eda20(param_1,param_2,2);
LAB_1002ed3d5:
  QMutex::unlock();
  return uVar6;
}

