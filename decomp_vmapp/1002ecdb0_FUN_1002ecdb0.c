
undefined8 FUN_1002ecdb0(long *param_1,long param_2)

{
  long *plVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined2 uVar11;
  uint uVar12;
  long lVar13;
  bool bVar14;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar15;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar16;
  undefined2 local_44;
  undefined2 local_42;
  Data *local_40;
  undefined1 local_32;
  
  uVar16 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff58 >> 0x20);
  if (0 < DAT_1011c568c) {
    uVar15 = 1;
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[C-FRAME]+CMD(psm:%04x, scid:%04x) %s",
                  *(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),"Connection Request"
                 );
  }
  QMutex::lock();
  plVar1 = param_1 + 4;
  FUN_1002ee670(&local_40,plVar1);
  FUN_1002ee7b0(&local_40);
  iVar7 = *(int *)(local_40 + 8);
  uVar12 = 0x40;
  if (iVar7 == *(int *)(local_40 + 0xc)) {
LAB_1002ecf11:
    uVar11 = (undefined2)uVar12;
    local_42 = uVar11;
    puVar8 = (undefined2 *)FUN_1002ee4c0(plVar1,&local_42);
    *puVar8 = *(undefined2 *)(param_2 + 0xe);
    puVar8[1] = uVar11;
    uVar3 = *(undefined2 *)(param_2 + 0xc);
    puVar8[2] = uVar3;
    puVar8[3] = (ushort)*(byte *)(param_2 + 9);
    *(undefined8 *)(puVar8 + 4) = 0;
    *(long **)(puVar8 + 8) = param_1;
    iVar7 = FUN_100252fa0(*param_1 + 0x40,param_1[1],puVar8 + 4,uVar3,FUN_1002edcf0);
    if (iVar7 != 0) {
      local_44 = uVar11;
      FUN_1002ee960(plVar1,&local_44);
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970(&DAT_100b392f0,"USB",0,
                      "[C-FRAME] Can\'t open l2cap channel %08x (addr:%02x-%02x-%02x-%02x-%02x-%02x, psm:%04x, scid:%04x, dcid:%04x)"
                      ,iVar7,*(undefined1 *)((long)param_1 + 0x15),
                      CONCAT44(uVar15,(uint)*(byte *)((long)param_1 + 0x14)),
                      *(undefined1 *)((long)param_1 + 0x13),*(undefined1 *)((long)param_1 + 0x12),
                      *(undefined1 *)((long)param_1 + 0x11),(char)param_1[2],
                      *(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),
                      CONCAT44(uVar16,uVar12));
      }
      goto LAB_1002ed00e;
    }
    uVar10 = 0;
    if (-1 < DAT_1011c568c) {
      uVar10 = 0;
      FUN_1008e3970(&DAT_100b392f0,"USB",0,
                    "[C-FRAME] Init open channel (addr:%02x-%02x-%02x-%02x-%02x-%02x, psm:%04x, scid:%04x, dcid:%04x, host_dev:%p, host_chn:%p)"
                    ,*(undefined1 *)((long)param_1 + 0x15),*(undefined1 *)((long)param_1 + 0x14),
                    CONCAT44(uVar15,(uint)*(byte *)((long)param_1 + 0x13)),
                    *(undefined1 *)((long)param_1 + 0x12),*(undefined1 *)((long)param_1 + 0x11),
                    (char)param_1[2],*(undefined2 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0xe),
                    uVar12,param_1[1],*(undefined8 *)(puVar8 + 4));
    }
  }
  else {
    lVar9 = (long)*(int *)(local_40 + 0xc) * 8 + -8 + (long)iVar7 * -8;
    lVar13 = 0;
    do {
      iVar6 = (int)lVar13;
      if ((iVar6 + 0x40U != (uint)*(ushort *)(local_40 + lVar13 * 8 + (long)iVar7 * 8 + 0x10)) ||
         (lVar13 = lVar13 + 1, 0xffff < iVar6 + 0x41U)) break;
      bVar14 = lVar9 != 0;
      lVar9 = lVar9 + -8;
    } while (bVar14);
    uVar12 = (int)lVar13 + 0x40;
    if (uVar12 < 0x10000) goto LAB_1002ecf11;
    if (-1 < DAT_1011c568c) {
      FUN_1008e3970(&DAT_100b392f0,"USB",0,
                    "[C-FRAME] Can\'t find free l2cap cid (addr:%02x-%02x-%02x-%02x-%02x-%02x, psm:%04x)"
                    ,*(undefined1 *)((long)param_1 + 0x15),*(undefined1 *)((long)param_1 + 0x14),
                    CONCAT44(uVar15,(uint)*(byte *)((long)param_1 + 0x13)),
                    *(undefined1 *)((long)param_1 + 0x12),*(undefined1 *)((long)param_1 + 0x11),
                    (char)param_1[2],*(undefined2 *)(param_2 + 0xc));
    }
LAB_1002ed00e:
    uVar2 = *(undefined1 *)(param_2 + 9);
    uVar4 = *(ushort *)((long)param_1 + 0x16);
    lVar9 = (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,0x82,0x14,FUN_1002df330,0);
    if (lVar9 == 0) {
      uVar10 = 0x20;
      if (-1 < DAT_1011c568c) {
        FUN_1008e3970(&DAT_100b392f0,"USB",0,"[ACL-U]-Can\'t alloc frame (handle:%04x, len:%d)",
                      uVar4,0x10);
      }
    }
    else {
      puVar5 = *(ushort **)(lVar9 + 0x10);
      *puVar5 = uVar4 & 0xfff | 0x2000;
      puVar5[1] = 0x10;
      uVar10 = 0x20;
      if (puVar5 != (ushort *)0x0) {
        puVar5[3] = 1;
        puVar5[2] = 0xc;
        *(undefined1 *)(puVar5 + 4) = 3;
        *(undefined1 *)((long)puVar5 + 9) = uVar2;
        puVar5[5] = 8;
        puVar5[6] = 0;
        puVar5[7] = *(ushort *)(param_2 + 0xe);
        puVar5[8] = 4;
        puVar5[9] = 0;
        uVar10 = 0;
        FUN_1002edbe0(param_1,puVar5,"Connection Error");
      }
    }
  }
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_32 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_1002ed1b0;
    }
    QListData::dispose(local_40);
  }
LAB_1002ed1b0:
  QMutex::unlock();
  return uVar10;
}

