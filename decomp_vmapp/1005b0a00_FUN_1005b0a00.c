
void FUN_1005b0a00(long param_1,int param_2,char param_3)

{
  uint *puVar1;
  ulong uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 ***local_60;
  undefined8 ***local_58;
  uint local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_34;
  
  iVar7 = param_2 % 0x10;
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",param_2,"CacheFile: path = [%s]",local_40 + *(long *)(local_40 + 0x10))
    ;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        local_88 = (undefined8 *)CONCAT71(local_88._1_7_,*(int *)local_40 != 0);
        if (*(int *)local_40 != 0) goto LAB_1005b0aa7;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
LAB_1005b0aa7:
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    QString::toUtf8();
    FUN_1008e3970("","vdisk",param_2,"CacheFile: disk name = [%s]",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        local_88 = (undefined8 *)CONCAT71(local_88._1_7_,*(int *)local_48 != 0);
        if (*(int *)local_48 != 0) goto LAB_1005b0b1d;
      }
      QArrayData::deallocate(local_48,1,8);
    }
  }
LAB_1005b0b1d:
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFile: open flags = 0x%X",*(undefined4 *)(param_1 + 0xa0))
    ;
  }
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFile: offset to group\'s data = %llu",
                  *(undefined8 *)(param_1 + 0x10c0));
  }
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFile: file header {");
  }
  FUN_1005add80(param_1 + 0xa4,param_2);
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFile: }");
  }
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFile: group bitmap {");
  }
  puVar1 = (uint *)(param_1 + 0x10b0);
  FUN_1005ad8a0(puVar1,param_2);
  if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",param_2,"CacheFile: }");
  }
  if (*(long *)(param_1 + 0x10b8) == 0) {
    if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
      FUN_1008e3970("","vdisk",param_2,"CacheFile: invalid bitmap (not loaded?)");
    }
  }
  else if (param_3 == '\0') {
    uVar4 = *(uint *)(param_1 + 0xd4);
    if (uVar4 != 0) {
      uVar8 = 0;
      do {
        if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
          if (*(long *)(param_1 + 0x10b8) == 0) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","isValid()",
                          "BlockGroup.cpp",0x3f5,"isSet");
          }
          if (*puVar1 <= uVar8) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                          "BlockGroup.cpp",0x3f6,"isSet");
          }
          pcVar6 = "absent";
          if ((*(uint *)(*(long *)(param_1 + 0x10b8) + (ulong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) &
              1) != 0) {
            pcVar6 = "present";
          }
          FUN_1008e3970("","vdisk",param_2,"CacheFile: group %u is %s",uVar8,pcVar6);
          uVar4 = *(uint *)(param_1 + 0xd4);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar4);
    }
  }
  else {
    local_68 = 0;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_50 = 0xffffffff;
    local_60 = &local_60;
    uVar2 = (ulong)*(uint *)(param_1 + 200) / (ulong)*(uint *)(param_1 + 0xc4);
    local_58 = local_60;
    local_88 = operator_new__(uVar2 * 0x20,(nothrow_t *)PTR_nothrow_100ba21c8);
    if (local_88 == (undefined8 *)0x0) {
      local_88 = (undefined8 *)0x0;
      FUN_1008e3970("","vdisk",0,"CacheFile: memory allocation failed, unable dump groups.");
    }
    else {
      if ((int)uVar2 != 0) {
        puVar5 = local_88;
        do {
          puVar5[1] = 0xffffffffffffffff;
          *puVar5 = 0xffffffffffffffff;
          puVar5[3] = 0;
          puVar5[2] = 0;
          puVar5 = puVar5 + 4;
        } while (puVar5 != local_88 + uVar2 * 4);
      }
      local_50 = 0;
      if (*(int *)(param_1 + 0xd4) != 0) {
        do {
          uVar4 = local_50;
          if (*(long *)(param_1 + 0x10b8) == 0) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","isValid()",
                          "BlockGroup.cpp",0x3f5,"isSet");
          }
          if (*puVar1 <= uVar4) {
            FUN_1008e3970("","vdisk",0,"ASSERT( %s ) occured in %s:%d [%s]","num < m_BitSize",
                          "BlockGroup.cpp",0x3f6,"isSet");
          }
          if ((*(uint *)(*(long *)(param_1 + 0x10b8) + (ulong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) &
              1) == 0) {
            if (iVar7 <= DAT_1011b55f8 || iVar7 < 1) {
              FUN_1008e3970("","vdisk",param_2,"CacheFile: group %u is absent",local_50);
            }
          }
          else {
            if (iVar7 <= DAT_1011b55f8 || iVar7 < 1) {
              FUN_1008e3970("","vdisk",param_2,"CacheFile: group %u is present",local_50);
            }
            local_34 = 0;
            uVar2 = ((ulong)*(uint *)(param_1 + 0xcc) - 1) +
                    (ulong)(local_50 * *(int *)(param_1 + 200)) + *(long *)(param_1 + 0x10c0);
            cVar3 = FUN_100707fb0(param_1 + 0x28,local_88,*(int *)(param_1 + 200),&local_34,
                                  uVar2 - uVar2 % (ulong)*(uint *)(param_1 + 0xcc));
            if ((cVar3 == '\0') || (local_34 != *(int *)(param_1 + 200))) {
              FUN_1008e3970("","vdisk",0,"Unable to read group[%u] (read %u, expected %u), err = %u"
                            ,local_50,local_34,*(int *)(param_1 + 200),
                            *(undefined4 *)(param_1 + 0x3c));
              if ((iVar7 < 1) || (iVar7 <= DAT_1011b55f8)) {
                FUN_1008e3970("","vdisk",param_2,"CacheFile: group %u reading failed",local_50);
              }
              break;
            }
            FUN_1005aa840(&local_88,param_2,1);
          }
          local_50 = local_50 + 1;
        } while (local_50 < *(uint *)(param_1 + 0xd4));
      }
      if (local_88 != (undefined8 *)0x0) {
        operator_delete__(local_88);
      }
    }
  }
  return;
}

