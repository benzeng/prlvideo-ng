
undefined4 FUN_100497f70(long param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined8 **ppuVar6;
  int *piVar7;
  undefined8 *puVar8;
  byte bVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  uint uVar16;
  long lVar17;
  void *pvVar18;
  bool bVar19;
  undefined4 local_210;
  void *local_1d8;
  void *pvStack_1d0;
  undefined8 local_1c8;
  int local_1b4;
  long local_1b0;
  QString local_1a8;
  int *local_1a0;
  int *local_198;
  int *local_190;
  undefined4 local_188;
  int *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 **local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  uVar1 = *(ushort *)(param_2 + 0x14);
  lVar11 = FUN_1002a6010(param_2);
  local_60 = &local_60;
  local_50 = 0;
  iVar2 = *(int *)(param_2 + 8);
  uVar16 = (uint)uVar1;
  local_58 = local_60;
  if (iVar2 - 0x8a00U < 2) {
    lVar12 = FUN_1002a6120(param_2,0,1);
    local_210 = 0xf0000003;
    if (lVar12 == 0) goto LAB_10049873a;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_68 = 0;
    FUN_100498b00(&local_60,&local_b8);
    std::string::~string((string *)&local_88);
    std::string::~string((string *)&uStack_a0);
    std::string::~string((string *)&local_b8);
    uVar3 = *(uint *)(lVar11 + 0x10);
    if (((ulong)uVar3 != 0) && (uVar3 < uVar16)) {
      std::string::__init((char *)&local_d0,(ulong)uVar3 + lVar11);
      ppuVar4 = local_60;
      local_38 = local_c0;
      local_40 = local_c8;
      local_48 = local_d0;
      local_d0 = local_60[2];
      local_c8 = local_60[3];
      ppuVar5 = (undefined8 **)local_60[4];
      local_60[4] = local_c0;
      local_c0 = ppuVar5;
      puVar8 = local_48;
      ppuVar4[3] = local_40;
      ppuVar4[2] = puVar8;
      std::string::~string((string *)&local_d0);
    }
    bVar9 = iVar2 == 0x8a01 | 2;
    uVar3 = *(uint *)(lVar11 + 0x14);
    if (((ulong)uVar3 != 0) && (uVar3 < uVar16)) {
      std::string::__init((char *)&local_e8,lVar11 + (ulong)uVar3);
      local_38 = local_d8;
      local_40 = local_e0;
      local_48 = local_e8;
      ppuVar4 = (undefined8 **)local_60[7];
      ppuVar5 = (undefined8 **)local_60[5];
      ppuVar6 = (undefined8 **)local_60[6];
      local_60[7] = local_d8;
      local_60[6] = local_e0;
      local_60[5] = local_e8;
      local_e8 = ppuVar5;
      local_e0 = ppuVar6;
      local_d8 = ppuVar4;
      std::string::~string((string *)&local_e8);
    }
  }
  else if (iVar2 == 0x8a02) {
    lVar12 = FUN_1002a6120(param_2,0,0);
    local_210 = 0xf0000003;
    if (lVar12 == 0) goto LAB_10049873a;
    uVar14 = (ulong)*(uint *)(lVar12 + 8);
    lVar17 = 0;
    pvVar18 = (void *)0x0;
    if (uVar14 != 0) {
      pvVar18 = operator_new(uVar14);
      ___bzero(pvVar18,uVar14);
      lVar17 = (long)pvVar18 + uVar14;
    }
    FUN_1002a5990(lVar12,0,pvVar18,lVar17 - (long)pvVar18 & 0xffffffff);
    cVar10 = FUN_1004991a0(pvVar18,lVar17 - (long)pvVar18,*(undefined4 *)(lVar11 + 0x1c),&local_60);
    if (pvVar18 != (void *)0x0) {
      operator_delete(pvVar18);
    }
    bVar9 = 1;
    local_210 = 0xf0000003;
    if (cVar10 == '\0') goto LAB_10049873a;
  }
  else {
    local_210 = 0xf0000002;
    if (iVar2 != 0x8a03) goto LAB_10049873a;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_f8 = 0;
    FUN_100498b00(&local_60,&local_148);
    std::string::~string((string *)&local_118);
    std::string::~string((string *)&uStack_130);
    std::string::~string((string *)&local_148);
    uVar3 = *(uint *)(lVar11 + 0x10);
    if (((ulong)uVar3 != 0) && (uVar3 < uVar16)) {
      std::string::__init((char *)&local_160,(ulong)uVar3 + lVar11);
      ppuVar4 = local_60;
      local_38 = local_150;
      local_40 = local_158;
      local_48 = local_160;
      local_160 = local_60[2];
      local_158 = local_60[3];
      ppuVar5 = (undefined8 **)local_60[4];
      local_60[4] = local_150;
      local_150 = ppuVar5;
      puVar8 = local_48;
      ppuVar4[3] = local_40;
      ppuVar4[2] = puVar8;
      std::string::~string((string *)&local_160);
    }
    uVar3 = *(uint *)(lVar11 + 0x14);
    bVar9 = 4;
    if (((ulong)uVar3 != 0) && (uVar3 < uVar16)) {
      std::string::__init((char *)&local_178,lVar11 + (ulong)uVar3);
      local_38 = local_168;
      local_40 = local_170;
      local_48 = local_178;
      ppuVar4 = (undefined8 **)local_60[7];
      ppuVar5 = (undefined8 **)local_60[5];
      ppuVar6 = (undefined8 **)local_60[6];
      local_60[7] = local_168;
      local_60[6] = local_170;
      local_60[5] = local_178;
      local_178 = ppuVar5;
      local_170 = ppuVar6;
      local_168 = ppuVar4;
      std::string::~string((string *)&local_178);
    }
  }
  FUN_100519b50(&local_180,param_1);
  local_1a0 = local_180;
  if (*local_180 != -1) {
    if (*local_180 == 0) {
      QListData::detach((int)&local_1a0);
      iVar2 = local_1a0[2];
      if (iVar2 != local_1a0[3]) {
        local_180 = local_180 + (long)local_180[2] * 2 + 4;
        piVar15 = local_1a0 + (long)iVar2 * 2 + 4;
        lVar12 = (long)local_1a0[3] * 8 + (long)iVar2 * -8;
        do {
          piVar7 = *(int **)local_180;
          *(int **)piVar15 = piVar7;
          if (1 < *piVar7 + 1U) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            UNLOCK();
            local_48 = (undefined8 *)CONCAT71(local_48._1_7_,*piVar7 != 0);
          }
          piVar15 = piVar15 + 2;
          local_180 = local_180 + 2;
          lVar12 = lVar12 + -8;
        } while (lVar12 != 0);
      }
    }
    else {
      LOCK();
      *local_180 = *local_180 + 1;
      UNLOCK();
      local_48 = (undefined8 *)CONCAT71(local_48._1_7_,*local_180 != 0);
    }
  }
  piVar15 = local_1a0 + (long)local_1a0[2] * 2 + 4;
  local_190 = local_1a0 + (long)local_1a0[3] * 2 + 4;
  local_188 = 1;
  local_210 = 0xf0000003;
  cVar10 = '\x03';
  local_198 = piVar15;
  if (local_1a0[2] != local_1a0[3]) {
    piVar7 = (int *)(param_1 + 0x68);
    local_210 = 0xf0000003;
    do {
      local_188 = 1;
      local_1a8.field0_0x0 = *(QTypedArrayData<unsigned_short> **)piVar15;
      if (1 < *(int *)local_1a8.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + 1;
        UNLOCK();
        local_48 = (undefined8 *)CONCAT71(local_48._1_7_,*(int *)local_1a8.field0_0x0 != 0);
      }
      local_1b0 = param_2;
      local_198 = piVar15;
      QMutex::lock();
      *piVar7 = *piVar7 + 1;
      plVar13 = (long *)FUN_100498bc0(param_1 + 0x78,piVar7);
      *plVar13 = local_1b0;
      QString::operator=((QString *)(plVar13 + 1),&local_1a8);
      iVar2 = *piVar7;
      local_1b4 = iVar2;
      QMutex::unlock();
      local_1d8 = (void *)0x0;
      pvStack_1d0 = (void *)0x0;
      local_1c8 = 0;
      FUN_100499520(&local_1d8,&local_60,bVar9,iVar2,0,lVar11,*(undefined4 *)(lVar11 + 0x18));
      uVar14 = FUN_100519800(param_1,piVar15,local_1d8,(int)pvStack_1d0 - (int)local_1d8,0,0);
      bVar19 = (uVar14 & 0xfffffffd) == 0;
      if (bVar19) {
        local_210 = 0xffffffff;
      }
      else {
        QMutex::lock();
        FUN_100498cf0(param_1 + 0x78,&local_1b4);
        QMutex::unlock();
      }
      if (local_1d8 != (void *)0x0) {
        if (pvStack_1d0 != local_1d8) {
          pvStack_1d0 = local_1d8;
        }
        operator_delete(local_1d8);
      }
      if (*(int *)local_1a8.field0_0x0 != -1) {
        if (*(int *)local_1a8.field0_0x0 != 0) {
          LOCK();
          *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
          UNLOCK();
          local_48 = (undefined8 *)CONCAT71(local_48._1_7_,*(int *)local_1a8.field0_0x0 != 0);
          if (*(int *)local_1a8.field0_0x0 != 0) goto LAB_1004986c7;
        }
        QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
      }
LAB_1004986c7:
      if (bVar19) {
        cVar10 = '\x01';
        goto LAB_100498715;
      }
      piVar15 = local_198 + 2;
      local_188 = 1;
    } while (piVar15 != local_190);
    cVar10 = '\x03';
    local_198 = piVar15;
  }
LAB_100498715:
  FUN_100037320(&local_1a0);
  if (cVar10 == '\x03') {
    local_210 = 0xf000001c;
  }
  FUN_100037320(&local_180);
LAB_10049873a:
  FUN_100498de0(&local_60);
  return local_210;
}

