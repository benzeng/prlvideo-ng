
ulong FUN_10056a300(long *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4,
                   long param_5,long param_6)

{
  long lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  code *pcVar10;
  undefined4 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  QArrayData *local_138;
  long *local_130;
  long local_128;
  undefined4 local_120;
  undefined4 local_11c;
  QString local_118;
  long local_110;
  undefined8 local_108;
  uint local_fc;
  code *local_f8;
  long *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_d8;
  QArrayData *local_d0;
  undefined1 local_c1;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [72];
  QArrayData *local_58;
  undefined1 local_50 [8];
  undefined1 *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_d0 = (QArrayData *)PTR_shared_null_100ba20d0;
  FUN_1005b6bc0();
  local_f8 = FUN_10056afc0;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_fc = 0;
  plVar8 = (long *)0x0;
  if (param_1[1] != 0) {
    plVar8 = *(long **)(param_1[1] + 0x10);
  }
  local_f0 = param_1;
  local_fc = (**(code **)(*plVar8 + 0x30))(plVar8,param_2,param_3,local_a0);
  if ((int)local_fc < 0) {
LAB_10056ab75:
    (**(code **)(*param_1 + 0x398))(param_1);
    uVar4 = local_fc;
    pvVar7 = (void *)(ulong)local_fc;
    pcVar10 = (code *)param_1[0x22f];
    if ((pcVar10 != (code *)0x0) && ((char)param_1[0x231] != '\0')) {
      if ((int)local_fc < 0x3e9) {
        if ((int)local_fc < 0) {
          FUN_1008e3970("","vdisk",0,"Callback caught error 0x%x",pvVar7);
          pcVar10 = (code *)param_1[0x22f];
        }
        else {
          pvVar7 = (void *)((ulong)(*(int *)((long)param_1 + 0x118c) * 1000 + local_fc) /
                           (ulong)*(uint *)(param_1 + 0x232));
        }
      }
      iVar3 = (*pcVar10)(pvVar7,1000,param_1[0x230]);
LAB_10056ac17:
      *(bool *)(param_1 + 0x231) = -1 < (int)uVar4 && iVar3 != 0;
      pvVar7 = (void *)(ulong)local_fc;
    }
  }
  else {
    if (param_1[0x243] == 0) {
      lVar5 = FUN_10070bb60(0,*(undefined8 *)(param_3 + 8));
      param_1[0x243] = lVar5;
      if (lVar5 != 0) goto LAB_10056a3f4;
LAB_10056ab6b:
      local_fc = 0x80000002;
      goto LAB_10056ab75;
    }
LAB_10056a3f4:
    if (param_1[0x242] == 0) {
      puVar6 = operator_new(0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar6 == (undefined8 *)0x0) {
        param_1[0x242] = 0;
        goto LAB_10056ab6b;
      }
      *puVar6 = &PTR_FUN_100bc5f10;
      QMutex::QMutex((QMutex *)(puVar6 + 1),0);
      puVar6[2] = param_1;
      puVar6[3] = 0;
      param_1[0x242] = (long)puVar6;
      *(undefined1 *)(param_1 + 0x244) = 1;
    }
    if (param_1[0x252] == 0) {
      puVar6 = operator_new(8,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (puVar6 == (undefined8 *)0x0) {
        param_1[0x252] = 0;
        goto LAB_10056ab6b;
      }
      *puVar6 = &PTR_FUN_100bc71f8;
      param_1[0x252] = (long)puVar6;
    }
    *(undefined4 *)((long)param_1 + 0x118c) = 0;
    param_1[0x22f] = param_5;
    param_1[0x230] = param_6;
    uVar12 = *(ulong *)(param_3 + 0xe);
    *(int *)(param_1 + 0x232) = (int)uVar12;
    lVar5 = param_1[0x225];
    lVar1 = param_1[0x226];
    lVar9 = lVar5;
    if (lVar1 != lVar5) {
      lVar9 = (~((lVar1 + -8) - lVar5) & 0xfffffffffffffff8U) + lVar1;
      param_1[0x226] = lVar9;
    }
    uVar13 = lVar9 - lVar5 >> 3;
    if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
      if ((uVar12 < uVar13) && (lVar5 = lVar5 + uVar12 * 8, lVar9 != lVar5)) {
        param_1[0x226] = (~((lVar9 + -8) - lVar5) & 0xfffffffffffffff8U) + lVar9;
      }
    }
    else {
      FUN_10057ecb0(param_1 + 0x225,uVar12 - uVar13);
      uVar12 = *(ulong *)(param_3 + 0xe);
    }
    local_108 = 0;
    FUN_10057dc60(param_1 + 0x225,uVar12,&local_108);
    *(undefined1 *)(param_1 + 0x231) = 1;
    *(undefined4 *)(param_1 + 0x228) = param_4;
    *(undefined4 *)((long)param_1 + 0x1144) = param_3[1];
    *(undefined4 *)(param_1 + 0x229) = param_3[2];
    *(undefined4 *)((long)param_1 + 0x114c) = *param_3;
    param_1[0x22a] = *(long *)(param_3 + 4);
    *(undefined4 *)(param_1 + 0x22b) = param_3[0x10];
    uVar11 = param_3[7];
    iVar3 = FUN_1007da300("devices.hdd.pss4k",0xffffffff);
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        uVar11 = 0x200;
      }
      else {
        uVar11 = 0x1000;
      }
    }
    *(undefined4 *)((long)param_1 + 0x115c) = uVar11;
    uVar12 = *(ulong *)(param_3 + 8);
    iVar3 = FUN_1007da300("devices.hdd.lss4k");
    uVar13 = 0x1000;
    if (iVar3 == 0) {
      uVar13 = 0x200;
    }
    else if (iVar3 == -1) {
      uVar13 = uVar12 & 0xffffffff;
    }
    param_1[0x22c] = uVar13;
    puVar14 = local_48;
    while (puVar14 != local_50) {
      local_118.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
      pvVar7 = operator_new(0x580,(nothrow_t *)PTR_nothrow_100ba21c8);
      if (pvVar7 == (void *)0x0) {
        FUN_1008e3970("","vdisk",0,"Error allocating memory for storage");
        local_fc = 0x80000002;
        iVar3 = 2;
      }
      else {
        local_130 = *(long **)(puVar14 + 0x28);
        if (local_130 != (long *)0x0) {
          LOCK();
          *(int *)(local_130 + 1) = (int)local_130[1] + 1;
          UNLOCK();
        }
        FUN_100584b50(pvVar7,param_1,&local_130);
        if (local_130 != (long *)0x0) {
          LOCK();
          plVar8 = local_130 + 1;
          lVar5 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)(*local_130 + 0x10))();
          }
        }
        FUN_100585020(pvVar7,*(undefined8 *)(puVar14 + 0x10),*(undefined8 *)(puVar14 + 0x18),
                      *(undefined4 *)(puVar14 + 0x20),*(undefined4 *)(puVar14 + 0x24));
        FUN_100585050(pvVar7);
        *(void **)(param_1[0x225] + (ulong)*(uint *)((long)param_1 + 0x118c) * 8) = pvVar7;
        iVar3 = 7;
        if ((*(byte *)((long)param_1 + 0x1141) & 0x10) == 0) {
          if (*(long *)(puVar14 + 0x40) != 1) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]",
                          "StorageInfo.m_ImageInfoList.size() == 1","DiskStatesImp.cpp",0x34d,
                          "Create");
          }
          local_128 = *(long *)(puVar14 + 0x18) - *(long *)(puVar14 + 0x10);
          local_120 = param_3[6];
          local_11c = *(undefined4 *)(*(long *)(puVar14 + 0x38) + 0x10);
          QString::operator=(&local_118,(QString *)(*(long *)(puVar14 + 0x38) + 0x20));
          local_110 = param_1[0x22c];
          plVar8 = (long *)FUN_1006848d0(&local_128,param_4,&local_f8,&local_fc,pvVar7);
          if (plVar8 == (long *)0x0) {
            QString::toUtf8();
            FUN_1008e3970("","vdisk",0,"Couldn\'t create image: %s error 0x%x",
                          local_138 + *(long *)(local_138 + 0x10),local_fc);
            if (*(int *)local_138 != -1) {
              if (*(int *)local_138 != 0) {
                LOCK();
                *(int *)local_138 = *(int *)local_138 + -1;
                local_c1 = *(int *)local_138 != 0;
                UNLOCK();
                if ((bool)local_c1) goto LAB_10056a8b4;
              }
              QArrayData::deallocate(local_138,1,8);
            }
LAB_10056a8b4:
            local_fc = 0x80021016;
            iVar3 = 2;
          }
          else {
            (**(code **)(*plVar8 + 0x28))(plVar8);
            (**(code **)(*plVar8 + 0x20))(plVar8);
            cVar2 = FUN_10059c480(&local_118);
            iVar3 = 0;
            if (cVar2 != '\0') {
              QFile::setPermissions(&local_118);
              iVar3 = 0;
            }
          }
        }
      }
      if (*(int *)local_118.field0_0x0 != -1) {
        if (*(int *)local_118.field0_0x0 != 0) {
          LOCK();
          *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
          local_c1 = *(int *)local_118.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_c1) goto LAB_10056a90c;
        }
        QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
      }
LAB_10056a90c:
      if (iVar3 != 0) {
        if (iVar3 == 2) goto LAB_10056ab75;
        if (iVar3 != 7) goto LAB_10056ac32;
      }
      puVar14 = *(undefined1 **)(puVar14 + 8);
      *(int *)((long)param_1 + 0x118c) = *(int *)((long)param_1 + 0x118c) + 1;
    }
    if ((char)param_1[0x231] == '\0') {
      local_fc = 0x80021038;
      goto LAB_10056ab75;
    }
    cVar2 = (**(code **)(*param_1 + 0x3d8))(param_1);
    if (cVar2 != '\0') {
      pcVar10 = *(code **)(*param_1 + 0x3a8);
      plVar8 = (long *)0x0;
      if (param_1[1] != 0) {
        plVar8 = *(long **)(param_1[1] + 0x10);
      }
      (**(code **)(*plVar8 + 0xd8))(local_b0);
      local_fc = (*pcVar10)(param_1,local_b0);
      if ((int)local_fc < 0) {
        FUN_1008e3970("","vdisk",0,"Disk created, but encryption engine initialization failed: 0x%x"
                      ,local_fc);
      }
      else {
        local_fc = (**(code **)(*param_1 + 0x3e0))(param_1);
        if ((int)local_fc < 0) {
          FUN_1008e3970("","vdisk",0,"Disk created, but encryption is not successful: 0x%x",local_fc
                       );
        }
        else {
          local_fc = (**(code **)(*param_1 + 0x1b8))(param_1,param_3 + 0x16);
          if (-1 < (int)local_fc) goto LAB_10056a9ed;
          FUN_1008e3970("","vdisk",0,"Disk created, but encryption key set failed: 0x%x",local_fc);
        }
      }
      goto LAB_10056ab75;
    }
LAB_10056a9ed:
    pvVar7 = (void *)0x0;
    if ((*(byte *)(param_1 + 0x228) & 0x20) == 0) {
      local_fc = (**(code **)(*param_1 + 0x380))(param_1);
      if ((int)local_fc < 0) goto LAB_10056ab75;
      uVar4 = (**(code **)(*param_1 + 0x388))();
      param_1[0x22a] = param_1[0x22a] + (ulong)uVar4;
      plVar8 = (long *)0x0;
      if (param_1[1] != 0) {
        plVar8 = *(long **)(param_1[1] + 0x10);
      }
      (**(code **)(*plVar8 + 0x48))(plVar8,&local_d0);
      local_fc = (**(code **)(*param_1 + 0x368))(param_1);
      if ((int)local_fc < 0) {
        FUN_1008e3970("","vdisk",0,"Disk created, but initial switch was failed: 0x%x",local_fc);
      }
      else {
        local_fc = FUN_1005aad70(param_1 + 2);
        if (-1 < (int)local_fc) {
          (**(code **)(*param_1 + 0x2b0))(local_c0,param_1);
          FUN_1005b2bb0(param_1 + 2,local_c0);
          local_fc = FUN_100569470(param_1);
          if (((int)local_fc < 0) && (1 < DAT_1011b55f8)) {
            FUN_1008e3970("","vdisk",2,"Trim tracker or compaction context creation failed 0x%x",
                          local_fc);
          }
          pvVar7 = (void *)0x0;
          if (((code *)param_1[0x22f] != (code *)0x0) && ((char)param_1[0x231] != '\0')) {
            iVar3 = (*(code *)param_1[0x22f])(0x3ed,1000,param_1[0x230]);
            *(bool *)(param_1 + 0x231) = iVar3 != 0;
          }
          goto LAB_10056ac32;
        }
        FUN_1008e3970("","vdisk",0,"Disk created, but initialization failed: 0x%x",local_fc);
      }
      (**(code **)(*param_1 + 0x20))(param_1);
      uVar4 = local_fc;
      pvVar7 = (void *)(ulong)local_fc;
      pcVar10 = (code *)param_1[0x22f];
      if ((pcVar10 == (code *)0x0) || ((char)param_1[0x231] == '\0')) goto LAB_10056ac32;
      if ((int)local_fc < 0x3e9) {
        if ((int)local_fc < 0) {
          FUN_1008e3970("","vdisk",0,"Callback caught error 0x%x",local_fc);
          pcVar10 = (code *)param_1[0x22f];
          uVar12 = (ulong)uVar4;
        }
        else {
          uVar12 = (ulong)(*(int *)((long)param_1 + 0x118c) * 1000 + local_fc) /
                   (ulong)*(uint *)(param_1 + 0x232);
        }
      }
      else {
        uVar12 = (ulong)local_fc;
      }
      iVar3 = (*pcVar10)(uVar12,1000,param_1[0x230]);
      goto LAB_10056ac17;
    }
  }
LAB_10056ac32:
  FUN_10057e490(local_50);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_c1 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_c1) goto LAB_10056ac71;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10056ac71:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_a0[0] = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_a0[0]) goto LAB_10056acad;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10056acad:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return (ulong)pvVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

