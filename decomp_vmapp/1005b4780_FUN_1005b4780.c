
int FUN_1005b4780(undefined8 param_1,undefined8 param_2,long *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  bool bVar9;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar8;
  uVar2 = (**(code **)(*param_3 + 0x2f8))(param_3);
  if ((uVar2 & 0xfffdffff) != 0x80401) {
    FUN_1008e3970("","vdisk",0,"Disk MUST opened with backup flag");
    iVar3 = -0x7ffdefef;
    goto LAB_1005b4960;
  }
  cVar1 = (**(code **)(*param_3 + 0xd8))(param_3);
  iVar3 = 0;
  if (cVar1 == '\0') goto LAB_1005b4960;
  iVar3 = (**(code **)(*param_3 + 0x2b8))(param_3,param_1);
  if (iVar3 < 0) {
    FUN_1007d6a70(&local_88);
    QString::toUtf8();
    lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    FUN_1008e3970("","vdisk",0,"Disk re-open(%s) failed, err = 0x%X",
                  local_80 + *(long *)(local_80 + 0x10),iVar3);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        UNLOCK();
        local_78 = CONCAT71(local_78._1_7_,*(int *)local_80 != 0);
        if (*(int *)local_80 != 0) goto LAB_1005b49fe;
      }
      QArrayData::deallocate(local_80,1,8);
    }
LAB_1005b49fe:
    if (*(int *)local_88 == -1) goto LAB_1005b4960;
    local_b8 = local_88;
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      bVar9 = *(int *)local_88 != 0;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,bVar9);
joined_r0x0001005b4b31:
      if (bVar9) goto LAB_1005b4960;
    }
  }
  else {
    lVar4 = (**(code **)(*param_3 + 0x350))(param_3);
    iVar3 = FUN_1005aad70(lVar4);
    if (iVar3 < 0) {
      FUN_1008e3970("","vdisk",0,"Cache init failed, err = 0x%X",iVar3);
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      goto LAB_1005b4960;
    }
    cVar1 = FUN_1005b2bb0(lVar4,param_1);
    if (cVar1 == '\0') {
      FUN_1007d6a70(&local_98,param_1);
      QString::toUtf8();
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      FUN_1008e3970("","vdisk",0,"Unable create cache for {%s}",
                    local_90 + *(long *)(local_90 + 0x10));
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          UNLOCK();
          local_78 = CONCAT71(local_78._1_7_,*(int *)local_90 != 0);
          if (*(int *)local_90 != 0) goto LAB_1005b4ad4;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_1005b4ad4:
      iVar3 = -0x7ffdf000;
      if (*(int *)local_98 != -1) {
        if (*(int *)local_98 != 0) {
          LOCK();
          *(int *)local_98 = *(int *)local_98 + -1;
          UNLOCK();
          local_78 = CONCAT71(local_78._1_7_,*(int *)local_98 != 0);
          if (*(int *)local_98 != 0) goto LAB_1005b4960;
        }
        QArrayData::deallocate(local_98,2,8);
      }
      goto LAB_1005b4960;
    }
    if (*(int *)(lVar4 + 0x18) != 0) {
      uVar7 = 0;
      do {
        local_50 = 0xffffffffffffffff;
        local_58 = 0xffffffffffffffff;
        local_40 = 0;
        local_48 = 0;
        uVar2 = (**(code **)(*param_3 + 0x300))(param_3);
        iVar3 = (**(code **)(*param_3 + 0x358))(param_3,0xffffffff,uVar2 * uVar7,&local_58);
        if (iVar3 < 0) {
          FUN_1008e3970("","vdisk",0,"group %u loading failed, err = 0x%X",uVar7 & 0xffffffff,iVar3)
          ;
          FUN_1007d6a70(&local_a8,param_1);
          QString::toUtf8();
          FUN_1008e3970("","vdisk",0,"Cache building for %s failed",
                        local_a0 + *(long *)(local_a0 + 0x10));
          if (*(int *)local_a0 != -1) {
            if (*(int *)local_a0 != 0) {
              LOCK();
              *(int *)local_a0 = *(int *)local_a0 + -1;
              UNLOCK();
              local_78 = CONCAT71(local_78._1_7_,*(int *)local_a0 != 0);
              if (*(int *)local_a0 != 0) goto LAB_1005b4bea;
            }
            QArrayData::deallocate(local_a0,1,8);
          }
LAB_1005b4bea:
          lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (*(int *)local_a8 == -1) goto LAB_1005b4960;
          local_b8 = local_a8;
          if (*(int *)local_a8 == 0) goto LAB_1005b4e34;
          LOCK();
          *(int *)local_a8 = *(int *)local_a8 + -1;
          UNLOCK();
          local_78 = CONCAT71(local_78._1_7_,*(int *)local_a8 != 0);
          if (*(int *)local_a8 != 0) goto LAB_1005b4960;
          goto LAB_1005b4e34;
        }
        uVar7 = uVar7 + 1;
      } while ((uint)uVar7 < *(uint *)(lVar4 + 0x18));
    }
    FUN_1005ab5b0(lVar4);
    lVar6 = lVar4 + 0x48;
    if (*(int *)(lVar4 + 0x78) == -1) {
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (2 < DAT_1011b55f8) {
        pcVar5 = "Skip save for closed cache";
LAB_1005b4c48:
        FUN_1008e3970("","vdisk",3,pcVar5);
      }
    }
    else if ((*(byte *)(lVar4 + 0xe8) & 2) == 0) {
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
      if (2 < DAT_1011b55f8) {
        pcVar5 = "Skip save for RO cache";
        goto LAB_1005b4c48;
      }
    }
    else {
      FUN_1005b0790(lVar6);
      lVar8 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    local_60 = 0;
    local_68 = 0;
    local_70 = *(undefined4 *)(lVar4 + 0x118);
    local_78 = param_2;
    iVar3 = FUN_1005b1220(lVar6,FUN_1005b43d0,&local_78);
    if (-1 < iVar3) {
      if (*(int *)(lVar4 + 0x78) == -1) {
        if (2 < DAT_1011b55f8) {
          pcVar5 = "Skip save for closed cache";
LAB_1005b4dcd:
          FUN_1008e3970("","vdisk",3,pcVar5);
        }
      }
      else if ((*(byte *)(lVar4 + 0xe8) & 2) == 0) {
        if (2 < DAT_1011b55f8) {
          pcVar5 = "Skip save for RO cache";
          goto LAB_1005b4dcd;
        }
      }
      else {
        FUN_1005b0790(lVar6);
      }
      FUN_1005afd10(lVar6);
      iVar3 = 0;
      goto LAB_1005b4960;
    }
    FUN_1008e3970("","vdisk",0,"Scannig failed, err = 0x%X",iVar3);
    FUN_1007d6a70(&local_b8,param_1);
    QString::toUtf8();
    FUN_1008e3970("","vdisk",0,"Cache processing for %s failed, err = 0x%X",
                  local_b0 + *(long *)(local_b0 + 0x10),iVar3);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        UNLOCK();
        local_78 = CONCAT71(local_78._1_7_,*(int *)local_b0 != 0);
        if (*(int *)local_b0 != 0) goto LAB_1005b4d8d;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_1005b4d8d:
    if (*(int *)local_b8 == -1) goto LAB_1005b4960;
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      bVar9 = *(int *)local_b8 != 0;
      UNLOCK();
      local_78 = CONCAT71(local_78._1_7_,bVar9);
      goto joined_r0x0001005b4b31;
    }
  }
LAB_1005b4e34:
  QArrayData::deallocate(local_b8,2,8);
LAB_1005b4960:
  if (lVar8 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

