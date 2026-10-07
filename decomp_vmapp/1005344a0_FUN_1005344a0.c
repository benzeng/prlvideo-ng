
undefined4 FUN_1005344a0(long param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 **ppuVar9;
  long alStack_80 [3];
  undefined1 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  undefined1 local_39;
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar8 = 0xf0000003;
  ppuVar9 = &local_68;
  local_38 = lVar6;
  if (*(ushort *)(param_2 + 0x14) < 0x14) goto LAB_10053475e;
  alStack_80[2] = 0x1005344e1;
  lVar6 = FUN_1002a6010(param_2);
  uVar8 = *(undefined4 *)(lVar6 + 4);
  uVar1 = *(undefined4 *)(lVar6 + 8);
  local_5c = *(undefined4 *)(lVar6 + 0x10);
  alStack_80[2] = 0x1005344f6;
  puVar7 = (undefined4 *)FUN_1002a6010(param_2);
  if (*(short *)(param_2 + 0x16) != 0) {
    alStack_80[2] = 0x100534511;
    lVar6 = FUN_1002a6120(param_2,0,0);
    if (*(int *)(lVar6 + 8) != 0) {
      lVar2 = *(long *)(param_1 + 0x40);
      if ((*(int *)(lVar2 + 0x20) == 0) || (*(int *)(lVar2 + 0x24) == 0)) {
        uVar8 = 0;
        lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
        ppuVar9 = &local_68;
        if (0 < DAT_1011b55f8) {
          uVar8 = 0;
          alStack_80[2] = 0x10053468c;
          FUN_1008e3970("","InvSharingHost",1,"Guest Sharing is not enabled: guest = %d, host = %d",
                        *(int *)(lVar2 + 0x20) != 0,*(int *)(lVar2 + 0x24) != 0);
          ppuVar9 = &local_68;
        }
        goto LAB_10053475e;
      }
      alStack_80[2] = 0x100534542;
      local_60 = uVar8;
      lVar6 = FUN_1002a6120(param_2,0,0);
      lVar2 = -((ulong)(*(uint *)(lVar6 + 8) & 0xfffffffe) + 0xf & 0xfffffffffffffff0);
      local_68 = (undefined1 *)&local_68;
      *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x100534571;
      FUN_1002a5990(lVar6,0,(long)&local_68 + lVar2);
      *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x100534580;
      QString::fromUtf16((ushort *)&local_50,(int)((long)&local_68 + lVar2));
      *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x100534591;
      QString::normalized(&local_48,&local_50,0,0);
      uVar8 = local_60;
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_39 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_1005345c4;
        }
        *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x1005345c4;
        QArrayData::deallocate(local_50,2,8);
      }
LAB_1005345c4:
      uVar4 = local_5c;
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x1005345da;
      cVar5 = FUN_100538b60(uVar3,uVar8,&local_48,uVar1,uVar4);
      if (cVar5 == '\0') {
        *puVar7 = 0xffffffff;
        if (0 < DAT_1011b55f8) {
          *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x1005346b2;
          QString::toUtf8();
          *(QArrayData **)((long)alStack_80 + lVar2 + 8) = local_58 + *(long *)(local_58 + 0x10);
          *(undefined8 *)((long)alStack_80 + lVar2) = 0x1005346e9;
          FUN_1008e3970("","InvSharingHost",1,
                        "couldn\'t mount the share: id = %d, type = %d, guest path = \"%s\"",uVar8,
                        uVar1);
          if (*(int *)local_58 != -1) {
            if (*(int *)local_58 != 0) {
              LOCK();
              *(int *)local_58 = *(int *)local_58 + -1;
              local_39 = *(int *)local_58 != 0;
              UNLOCK();
              if ((bool)local_39) goto LAB_10053471d;
            }
            *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x10053471d;
            QArrayData::deallocate(local_58,1,8);
          }
        }
      }
      else {
        *puVar7 = 0;
      }
LAB_10053471d:
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_39 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_39) goto LAB_100534758;
        }
        *(undefined8 *)((long)alStack_80 + lVar2 + 0x10) = 0x100534758;
        QArrayData::deallocate(local_48,2,8);
      }
LAB_100534758:
      uVar8 = 0;
      ppuVar9 = (undefined1 **)local_68;
      goto LAB_10053475e;
    }
  }
  if (0 < DAT_1011b55f8) {
    alStack_80[2] = 0x10053461c;
    FUN_1008e3970("","InvSharingHost",1,"no guest share\'s name provided");
  }
  *puVar7 = 0x102;
  uVar8 = 0;
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  ppuVar9 = &local_68;
LAB_10053475e:
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppuVar9 + -8) = &UNK_10053477a;
    ___stack_chk_fail();
  }
  return uVar8;
}

