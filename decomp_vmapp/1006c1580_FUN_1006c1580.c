
undefined8 FUN_1006c1580(long *param_1,char param_2,char param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  size_t sVar7;
  QArrayData *pQVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  ushort uVar14;
  uint uVar15;
  char *pcVar16;
  int local_244;
  int local_234;
  QString local_210;
  undefined8 local_208;
  undefined8 local_200;
  int local_1f8;
  int local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  QString local_1e0;
  uint local_1d8;
  int iStack_1d4;
  undefined4 local_1d0;
  undefined2 uStack_1cc;
  ushort uStack_1ca;
  int local_1c8;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1b9;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined8 uStack_180;
  char local_170 [16];
  ushort local_160;
  int local_15c;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 local_40;
  long local_38;
  
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar12;
  FUN_1006c1f60();
  iVar2 = _socket(2,2,0);
  if (iVar2 < 0) {
    uVar10 = 0;
  }
  else {
    local_1e8 = 0;
    local_1f0 = 0;
    uStack_1ec = 0;
    pvVar5 = operator_new__(0x800);
    uVar13 = 0x800;
    while( true ) {
      uStack_1ec = SUB84(pvVar5,0);
      local_1e8 = (undefined4)((ulong)pvVar5 >> 0x20);
      local_1f0 = (int)uVar13;
      iVar3 = _ioctl(iVar2,0xc00c6924,&local_1f0);
      if (iVar3 < 0) break;
      if ((long)local_1f0 + 0x20U < uVar13) {
        if (local_1f0 < 1) goto LAB_1006c1bb2;
        pcVar16 = (char *)CONCAT44(local_1e8,uStack_1ec);
        iVar3 = 0;
        iVar11 = 0;
        goto LAB_1006c16d0;
      }
      uVar13 = (ulong)(uint)((int)uVar13 * 2);
      pvVar6 = operator_new__(uVar13);
      operator_delete__(pvVar5);
      pvVar5 = pvVar6;
    }
    _close(iVar2);
    operator_delete__(pvVar5);
    uVar10 = 0;
    lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  goto LAB_1006c1bf3;
LAB_1006c16d0:
  do {
    bVar1 = pcVar16[0x10];
    if ((byte)(pcVar16[0x11] | 0x10U) == 0x12) {
      local_210.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      local_208 = 0;
      local_1f8 = -1;
      local_200 = 0xffff000000000000;
      local_1a0 = *(undefined8 *)(pcVar16 + 0x18);
      local_1a8 = *(undefined8 *)(pcVar16 + 0x10);
      local_1b8 = *(undefined8 *)pcVar16;
      local_1b0 = *(undefined8 *)(pcVar16 + 8);
      iVar4 = _ioctl(iVar2,0xc0206911,&local_1b8);
      local_244 = iVar3;
      if (-1 < iVar4) {
        uVar15 = (uint)(short)local_1a8;
        if (((((uVar15 & 1) != 0) || (param_2 == '\0')) &&
            ((param_3 == '\0' || (iVar4 = _ioctl(iVar2,0xc0206921,&local_1b8), iVar4 == 0)))) &&
           (pcVar16[0x16] == '\x06')) {
          local_1bc = *(undefined2 *)(pcVar16 + (ulong)(byte)pcVar16[0x15] + 0x1c);
          local_1c0 = *(undefined4 *)(pcVar16 + (ulong)(byte)pcVar16[0x15] + 0x18);
          if ((uVar15 & 10) == 2) {
            local_234 = 0;
            local_1a0 = *(undefined8 *)(pcVar16 + 0x18);
            local_1a8 = *(undefined8 *)(pcVar16 + 0x10);
            local_1b8 = *(undefined8 *)pcVar16;
            local_1b0 = *(undefined8 *)(pcVar16 + 8);
            iVar4 = _ioctl(iVar2,0xc0206923,&local_1b8);
            if ((-1 < iVar4) && (1 < local_1a8._4_4_ + 1U)) {
              local_234 = local_1a8._4_4_;
            }
          }
          else {
            local_234 = 0;
          }
          ___bzero(local_170,0x118);
          local_160 = 0xffff;
          local_15c = 0x50524c56;
          uStack_180 = 0;
          local_198 = *(undefined8 *)pcVar16;
          uStack_190 = *(undefined8 *)(pcVar16 + 8);
          local_188 = local_170;
          iVar4 = _ioctl(iVar2,0xc020697f,&local_198);
          uVar14 = 0xffff;
          if ((-1 < iVar4) && (local_15c == 0x50524c56)) {
            local_15c = 0;
            sVar7 = _strlen(local_170);
            if (((int)sVar7 != 0) && (((int)sVar7 < 0x10 && (uVar14 = 0xffff, local_160 < 0x1000))))
            {
              uVar14 = local_160;
            }
          }
          local_40 = *(undefined8 *)(pcVar16 + 0x18);
          local_58 = *(undefined8 *)pcVar16;
          local_50 = *(undefined8 *)(pcVar16 + 8);
          local_48 = *(ulong *)(pcVar16 + 0x10) & 0xffffffff00000000;
          iVar4 = _ioctl(iVar2,0xc02069c1,&local_58);
          if (((iVar4 == 0) && (0x4056532f < (int)local_48)) && ((int)local_48 + 0xafa9acd0U < 0x11)
             ) {
            iVar3 = (int)local_48 + -0x40565330;
          }
          else {
            local_244 = iVar3 + 1;
          }
          sVar7 = _strlen(pcVar16);
          pQVar8 = (QArrayData *)QString::fromAscii_helper(pcVar16,(int)sVar7);
          if (1 < *(int *)pQVar8 + 1U) {
            LOCK();
            *(int *)pQVar8 = *(int *)pQVar8 + 1;
            local_1b9 = *(int *)pQVar8 != 0;
            UNLOCK();
          }
          iStack_1d4 = local_234;
          uStack_1cc = local_1bc;
          local_1d0 = local_1c0;
          local_1e0.field0_0x0 = (QTypedArrayData<unsigned_short> *)pQVar8;
          local_1d8 = uVar15;
          uStack_1ca = uVar14;
          local_1c8 = iVar3;
          QString::operator=(&local_210,&local_1e0);
          local_1f8 = local_1c8;
          local_208 = CONCAT44(iStack_1d4,local_1d8);
          local_200 = CONCAT26(uStack_1ca,CONCAT24(uStack_1cc,local_1d0));
          if (*(int *)local_1e0.field0_0x0 != -1) {
            if (*(int *)local_1e0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1e0.field0_0x0 = *(int *)local_1e0.field0_0x0 + -1;
              local_1b9 = *(int *)local_1e0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_1b9) goto LAB_1006c1aa2;
            }
            QArrayData::deallocate((QArrayData *)local_1e0.field0_0x0,2,8);
          }
LAB_1006c1aa2:
          if (*(int *)pQVar8 != -1) {
            if (*(int *)pQVar8 != 0) {
              LOCK();
              *(int *)pQVar8 = *(int *)pQVar8 + -1;
              local_1b9 = *(int *)pQVar8 != 0;
              UNLOCK();
              if ((bool)local_1b9) goto LAB_1006c1ad5;
            }
            QArrayData::deallocate(pQVar8,2,8);
          }
LAB_1006c1ad5:
          plVar9 = operator_new(0x30);
          plVar9[2] = (long)local_210.field0_0x0;
          if (1 < *(int *)local_210.field0_0x0 + 1U) {
            LOCK();
            *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + 1;
            local_1b9 = *(int *)local_210.field0_0x0 != 0;
            UNLOCK();
          }
          *(int *)(plVar9 + 3) = (int)local_208;
          *(int *)((long)plVar9 + 0x1c) = (int)((ulong)local_208 >> 0x20);
          *(undefined2 *)((long)plVar9 + 0x26) = local_200._6_2_;
          *(int *)(plVar9 + 5) = local_1f8;
          *(undefined2 *)((long)plVar9 + 0x24) = local_200._4_2_;
          *(undefined4 *)(plVar9 + 4) = (undefined4)local_200;
          plVar9[1] = (long)param_1;
          lVar12 = *param_1;
          *plVar9 = lVar12;
          *(long **)(lVar12 + 8) = plVar9;
          *param_1 = (long)plVar9;
          param_1[2] = param_1[2] + 1;
        }
      }
      iVar3 = local_244;
      if (*(int *)local_210.field0_0x0 != -1) {
        if (*(int *)local_210.field0_0x0 != 0) {
          LOCK();
          *(int *)local_210.field0_0x0 = *(int *)local_210.field0_0x0 + -1;
          local_1b9 = *(int *)local_210.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_1b9) goto LAB_1006c1b9c;
        }
        QArrayData::deallocate((QArrayData *)local_210.field0_0x0,2,8);
      }
    }
LAB_1006c1b9c:
    iVar11 = iVar11 + (int)((ulong)bVar1 + 0x10);
    pcVar16 = pcVar16 + (ulong)bVar1 + 0x10;
  } while (iVar11 < local_1f0);
LAB_1006c1bb2:
  _close(iVar2);
  operator_delete__(pvVar5);
  FUN_1006c2000(param_1[1],param_1,param_1[2],&local_210);
  uVar10 = 1;
  lVar12 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_1006c1bf3:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

