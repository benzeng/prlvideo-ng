
undefined4 FUN_1002ed590(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  long *plVar6;
  ushort uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  ushort *puVar11;
  uint uVar12;
  char *in_stack_ffffffffffffffa8;
  
  if (0 < DAT_1011c568c) {
    in_stack_ffffffffffffffa8 = "Configuration Request";
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+CMD(dcid:%04x, flags:%04x) %s",
                  *(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),
                  "Configuration Request");
  }
  uVar3 = *(ushort *)(param_2 + 10);
  uVar2 = *(undefined1 *)(param_2 + 9);
  uVar7 = uVar3 + 6;
  uVar4 = *(ushort *)((long)param_1 + 0x16);
  iVar1 = uVar7 + 4;
  lVar9 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0x82,uVar7 + 8,FUN_1002df330,0);
  if (lVar9 == 0) {
    uVar8 = 0x20;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",uVar4,
                    iVar1);
    }
  }
  else {
    puVar5 = *(ushort **)(lVar9 + 0x10);
    *puVar5 = uVar4 & 0xfff | 0x2000;
    puVar5[1] = (ushort)iVar1;
    uVar8 = 0x20;
    if (puVar5 != (ushort *)0x0) {
      puVar5[3] = 1;
      puVar5[2] = uVar7;
      *(undefined1 *)(puVar5 + 4) = 5;
      *(undefined1 *)((long)puVar5 + 9) = uVar2;
      puVar5[5] = uVar3 + 2;
      QMutex::lock();
      plVar6 = (long *)param_1[4];
      if (*(uint *)(plVar6 + 4) != 0) {
        uVar12 = *(uint *)((long)plVar6 + 0x24) ^ (uint)*(ushort *)(param_2 + 0xc);
        plVar10 = *(long **)(plVar6[1] + ((ulong)uVar12 % (ulong)*(uint *)(plVar6 + 4)) * 8);
        if (plVar10 != plVar6) {
          do {
            if ((*(uint *)(plVar10 + 1) == uVar12) &&
               (*(ushort *)(param_2 + 0xc) == *(ushort *)((long)plVar10 + 0xc))) {
              if (plVar10 != plVar6) {
                puVar11 = (ushort *)FUN_1002ee4c0(param_1 + 4);
                uVar4 = *puVar11;
                puVar5[6] = uVar4;
                puVar5[7] = 0;
                puVar5[8] = 0;
                if (uVar3 - 4 != 0) {
                  _memcpy(puVar5 + 9,(void *)(param_2 + 0x10),(ulong)(uVar3 - 4));
                }
                if (0 < DAT_1011c568c) {
                  FUN_1008e3970(&DAT_100b392f0,"USB",0,
                                "[L2CAP-C-FRAME-CFG-RES] scid: 0x%04x, flags: 0x%04x, result: 0x%04x"
                                ,uVar4,0,(ulong)in_stack_ffffffffffffffa8 & 0xffffffff00000000);
                }
                uVar8 = 0;
                FUN_1002edbe0(param_1,puVar5,"Configuration Success");
                goto LAB_1002ed7e1;
              }
              break;
            }
            plVar10 = (long *)*plVar10;
          } while (plVar10 != plVar6);
        }
      }
      uVar8 = FUN_1002eda20(param_1,param_2,2);
LAB_1002ed7e1:
      QMutex::unlock();
    }
  }
  return uVar8;
}

