
void FUN_100087ea0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  _func_void_Node_ptr_void_ptr *p_Var9;
  _func_void_Node_ptr_void_ptr *p_Var10;
  long lVar11;
  code *pcVar12;
  _func_void_Node_ptr_void_ptr *p_Var13;
  undefined8 uVar14;
  QArrayData *pQVar15;
  QArrayData *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  QArrayData *local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  FUN_100188480(&local_e8);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_e8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmUuid__10226a030,uVar8);
  if (*(int *)local_e8 != -1) {
    if (*(int *)local_e8 != 0) {
      LOCK();
      *(int *)local_e8 = *(int *)local_e8 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)local_e8 != 0);
      if (*(int *)local_e8 != 0) goto LAB_100087f51;
    }
    QArrayData::deallocate(local_e8,2,8);
  }
LAB_100087f51:
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10018d830(&local_f0,uVar8);
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_f0);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmName__102269908,uVar8);
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)local_f0 != 0);
      if (*(int *)local_f0 != 0) goto LAB_100087fde;
    }
    QArrayData::deallocate(local_f0,2,8);
  }
LAB_100087fde:
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10018c2b0(uVar8);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  CVmCommonOptions::getVmDescription();
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithQString__102268d00,&local_f8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmDescription__10226a038,uVar8);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)local_f8 != 0);
      if (*(int *)local_f8 != 0) goto LAB_100088083;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_100088083:
  uVar14 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar14 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar2 = FUN_10018c770(uVar14);
  if (cVar2 == '\0') {
    uVar14 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
    }
    cVar2 = FUN_10011cdc0(uVar14);
    if (cVar2 != '\0') {
      uVar14 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar14 = *(undefined8 *)(param_1 + 0x28);
      }
      cVar2 = FUN_10018d240(uVar14);
      if (cVar2 == '\0') {
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        local_108 = (QArrayData *)QString::fromAscii_helper("locked",6);
        uVar8 = FUN_1000893b0(&local_108);
        (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmPictureMap__10226a040,uVar8);
        cVar2 = '\x01';
        if (*(int *)local_108 != -1) {
          if (*(int *)local_108 != 0) {
            LOCK();
            *(int *)local_108 = *(int *)local_108 + -1;
            UNLOCK();
            local_40 = CONCAT71(local_40._1_7_,*(int *)local_108 != 0);
            if (*(int *)local_108 != 0) goto LAB_1000883bd;
          }
          QArrayData::deallocate(local_108,2,8);
        }
        goto LAB_1000883bd;
      }
    }
    uVar14 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
    }
    cVar2 = FUN_10018ecf0(uVar14);
    if (cVar2 == '\0') {
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      local_110 = (QArrayData *)QString::fromAscii_helper("invalid",7);
      uVar8 = FUN_1000893b0(&local_110);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmPictureMap__10226a040,uVar8);
      if (*(int *)local_110 != -1) {
        pQVar15 = local_110;
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          UNLOCK();
          local_40 = CONCAT71(local_40._1_7_,*(int *)local_110 != 0);
          pQVar15 = local_110;
          if (*(int *)local_110 != 0) {
            cVar2 = '\0';
            goto LAB_1000883bd;
          }
        }
        goto LAB_1000883ab;
      }
      cVar2 = '\0';
    }
    else {
      uVar14 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar14 = *(undefined8 *)(param_1 + 0x28);
      }
      iVar5 = FUN_10018bce0(uVar14);
      if (iVar5 != 3) {
        uVar14 = 0;
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
          uVar14 = *(undefined8 *)(param_1 + 0x28);
        }
        iVar5 = FUN_10018bce0(uVar14);
        if (iVar5 != 2) {
          uVar14 = *(undefined8 *)(param_1 + 0x18);
          uVar8 = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            uVar8 = *(undefined8 *)(param_1 + 0x28);
          }
          uVar7 = FUN_10018f860(uVar8);
          uVar8 = 0;
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
            uVar8 = *(undefined8 *)(param_1 + 0x28);
          }
          uVar4 = FUN_10018f890(uVar8);
          uVar8 = FUN_1000894e0(uVar7,uVar4);
          (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmPictureMap__10226a040,uVar8);
          cVar2 = '\x01';
          goto LAB_1000883bd;
        }
      }
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      local_118 = (QArrayData *)QString::fromAscii_helper("third_party",0xb);
      uVar8 = FUN_1000893b0(&local_118);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmPictureMap__10226a040,uVar8);
      if (*(int *)local_118 != -1) {
        pQVar15 = local_118;
        if (*(int *)local_118 != 0) {
          LOCK();
          *(int *)local_118 = *(int *)local_118 + -1;
          UNLOCK();
          local_40 = CONCAT71(local_40._1_7_,*(int *)local_118 != 0);
          pQVar15 = local_118;
          if (*(int *)local_118 != 0) {
            cVar2 = '\0';
            goto LAB_1000883bd;
          }
        }
        goto LAB_1000883ab;
      }
      cVar2 = '\0';
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    local_100 = (QArrayData *)QString::fromAscii_helper("template",8);
    uVar8 = FUN_1000893b0(&local_100);
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmPictureMap__10226a040,uVar8);
    if (*(int *)local_100 == -1) {
      cVar2 = '\0';
    }
    else {
      pQVar15 = local_100;
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        UNLOCK();
        local_40 = CONCAT71(local_40._1_7_,*(int *)local_100 != 0);
        if (*(int *)local_100 != 0) {
          cVar2 = '\0';
          goto LAB_1000883bd;
        }
      }
LAB_1000883ab:
      QArrayData::deallocate(pQVar15,2,8);
      cVar2 = '\0';
    }
  }
LAB_1000883bd:
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar3 = FUN_10018ed10(uVar8);
  puVar1 = PTR__objc_msgSend_1021e1c68;
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setArchived__10226a048,uVar3);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x18),PTR_s_setRunnable__10226a050,cVar2);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar3 = FUN_1001238f0(uVar8);
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setAntivirusAvailable__10226a058,uVar3);
  uVar14 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar14 = *(undefined8 *)(param_1 + 0x28);
  }
  cVar2 = FUN_10018ff50(uVar14);
  if (cVar2 == '\0') {
    uVar14 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar14 = *(undefined8 *)(param_1 + 0x28);
    }
    cVar2 = FUN_10018ffc0(uVar14);
    if (cVar2 != '\0') {
      uVar14 = 0;
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
        uVar14 = *(undefined8 *)(param_1 + 0x28);
      }
      iVar5 = FUN_10018a9d0(uVar14);
      if (iVar5 != 0x30000009) goto LAB_100088633;
    }
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    if ((DAT_102311e50 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_102311e50), iVar5 != 0)) {
      DAT_102311e48 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
      ___cxa_atexit(FUN_10008c670,&DAT_102311e48,0x100000000);
      ___cxa_guard_release(&DAT_102311e50);
    }
    if (*(int *)(DAT_102311e48 + 0x14) == 0) {
      local_80 = CONCAT44(local_80._4_4_,0x30000004);
      local_40 = 0;
      FUN_10008c950(&DAT_102311e48,&local_80,&local_40);
      local_90 = CONCAT44(local_90._4_4_,0x30000001);
      local_50 = 1;
      FUN_10008c950(&DAT_102311e48,&local_90,&local_50);
      local_a0 = CONCAT44(local_a0._4_4_,0x30000005);
      local_60 = 2;
      FUN_10008c950(&DAT_102311e48,&local_a0,&local_60);
      local_b0 = CONCAT44(local_b0._4_4_,0x30000009);
      local_70 = 3;
      FUN_10008c950(&DAT_102311e48,&local_b0,&local_70);
    }
    p_Var13 = DAT_102311e48;
    if (1 < *(int *)(DAT_102311e48 + 0x10) + 1U) {
      LOCK();
      pcVar12 = DAT_102311e48 + 0x10;
      *(int *)pcVar12 = *(int *)pcVar12 + 1;
      UNLOCK();
      local_c0 = CONCAT71(local_c0._1_7_,*(int *)pcVar12 != 0);
    }
    p_Var9 = p_Var13;
    if ((((byte)p_Var13[0x28] & 1) == 0) && (1 < *(uint *)(p_Var13 + 0x10))) {
      p_Var9 = (_func_void_Node_ptr_void_ptr *)
               QHashData::detach_helper(p_Var13,FUN_10008caf0,0x8cb20,0x18);
      if (*(int *)(p_Var13 + 0x10) != -1) {
        if (*(int *)(p_Var13 + 0x10) != 0) {
          LOCK();
          pcVar12 = p_Var13 + 0x10;
          *(int *)pcVar12 = *(int *)pcVar12 + -1;
          UNLOCK();
          local_c0 = CONCAT71(local_c0._1_7_,*(int *)pcVar12 != 0);
          if (*(int *)pcVar12 != 0) goto LAB_100088656;
        }
        QHashData::free_helper((_func_void_Node_ptr *)p_Var13);
      }
    }
LAB_100088656:
    uVar8 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      uVar8 = *(undefined8 *)(param_1 + 0x28);
    }
    uVar6 = FUN_10018a9d0(uVar8);
    local_120 = 4;
    uVar8 = 4;
    if (*(int *)(p_Var9 + 0x14) != 0) {
      p_Var13 = p_Var9;
      if (*(uint *)(p_Var9 + 0x20) != 0) {
        for (p_Var10 = *(_func_void_Node_ptr_void_ptr **)
                        (*(long *)(p_Var9 + 8) +
                        ((ulong)(*(uint *)(p_Var9 + 0x24) ^ uVar6) % (ulong)*(uint *)(p_Var9 + 0x20)
                        ) * 8);
            (p_Var13 = p_Var9, p_Var10 != p_Var9 &&
            ((*(uint *)(p_Var10 + 8) != (*(uint *)(p_Var9 + 0x24) ^ uVar6) ||
             (p_Var13 = p_Var10, uVar6 != *(uint *)(p_Var10 + 0xc)))));
            p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var10) {
        }
      }
      pcVar12 = (code *)&local_120;
      if (p_Var13 != p_Var9) {
        pcVar12 = p_Var13 + 0x10;
      }
      uVar8 = *(undefined8 *)pcVar12;
    }
    (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmState__10226a060,uVar8);
    if (*(int *)(p_Var9 + 0x10) != -1) {
      if (*(int *)(p_Var9 + 0x10) != 0) {
        LOCK();
        pcVar12 = p_Var9 + 0x10;
        *(int *)pcVar12 = *(int *)pcVar12 + -1;
        UNLOCK();
        local_40 = CONCAT71(local_40._1_7_,*(int *)pcVar12 != 0);
        if (*(int *)pcVar12 != 0) goto LAB_100088717;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var9);
    }
  }
  else {
LAB_100088633:
    (*(code *)PTR__objc_msgSend_1021e1c68)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_setVmState__10226a060,4);
  }
LAB_100088717:
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  if ((DAT_102311e60 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_102311e60), iVar5 != 0)) {
    DAT_102311e58 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10008c6b0,&DAT_102311e58,0x100000000);
    ___cxa_guard_release(&DAT_102311e60);
  }
  if (*(int *)(DAT_102311e58 + 0x14) == 0) {
    local_70 = CONCAT44(local_70._4_4_,2);
    local_40 = 1;
    FUN_10008cb30(&DAT_102311e58,&local_70,&local_40);
    local_80 = CONCAT44(local_80._4_4_,3);
    local_50 = 2;
    FUN_10008cb30(&DAT_102311e58,&local_80,&local_50);
    local_90 = CONCAT44(local_90._4_4_,4);
    local_60 = 2;
    FUN_10008cb30(&DAT_102311e58,&local_90,&local_60);
  }
  p_Var13 = DAT_102311e58;
  if (1 < *(int *)(DAT_102311e58 + 0x10) + 1U) {
    LOCK();
    pcVar12 = DAT_102311e58 + 0x10;
    *(int *)pcVar12 = *(int *)pcVar12 + 1;
    UNLOCK();
    local_a0 = CONCAT71(local_a0._1_7_,*(int *)pcVar12 != 0);
  }
  p_Var9 = p_Var13;
  if ((((byte)p_Var13[0x28] & 1) == 0) && (1 < *(uint *)(p_Var13 + 0x10))) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var13,FUN_10008ccd0,0x8cd00,0x18);
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar12 = p_Var13 + 0x10;
        *(int *)pcVar12 = *(int *)pcVar12 + -1;
        UNLOCK();
        local_a0 = CONCAT71(local_a0._1_7_,*(int *)pcVar12 != 0);
        if (*(int *)pcVar12 != 0) goto LAB_100088867;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var13);
    }
  }
LAB_100088867:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10018c2b0(uVar8);
  CVmConfiguration::getVmIdentification();
  uVar6 = CVmIdentification::getVmFilesLocation();
  local_128 = 0;
  uVar8 = 0;
  if (*(int *)(p_Var9 + 0x14) != 0) {
    p_Var13 = p_Var9;
    if (*(uint *)(p_Var9 + 0x20) != 0) {
      for (p_Var10 = *(_func_void_Node_ptr_void_ptr **)
                      (*(long *)(p_Var9 + 8) +
                      ((ulong)(*(uint *)(p_Var9 + 0x24) ^ uVar6) % (ulong)*(uint *)(p_Var9 + 0x20))
                      * 8);
          (p_Var13 = p_Var9, p_Var10 != p_Var9 &&
          ((*(uint *)(p_Var10 + 8) != (*(uint *)(p_Var9 + 0x24) ^ uVar6) ||
           (p_Var13 = p_Var10, uVar6 != *(uint *)(p_Var10 + 0xc)))));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var10) {
      }
    }
    pcVar12 = (code *)&local_128;
    if (p_Var13 != p_Var9) {
      pcVar12 = p_Var13 + 0x10;
    }
    uVar8 = *(undefined8 *)pcVar12;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setLocation__10226a068,uVar8);
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar12 = p_Var9 + 0x10;
      *(int *)pcVar12 = *(int *)pcVar12 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)pcVar12 != 0);
      if (*(int *)pcVar12 != 0) goto LAB_10008893b;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var9);
  }
LAB_10008893b:
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  if ((DAT_102311e70 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_102311e70), iVar5 != 0)) {
    DAT_102311e68 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10008c6f0,&DAT_102311e68,0x100000000);
    ___cxa_guard_release(&DAT_102311e70);
  }
  if (*(int *)(DAT_102311e68 + 0x14) == 0) {
    local_b0 = CONCAT44(local_b0._4_4_,0xfa645a);
    local_40 = 1;
    FUN_10008cd10(&DAT_102311e68,&local_b0,&local_40);
    local_c0 = CONCAT44(local_c0._4_4_,0xf6aa44);
    local_50 = 2;
    FUN_10008cd10(&DAT_102311e68,&local_c0,&local_50);
    local_d0 = CONCAT44(local_d0._4_4_,0xefdb47);
    local_60 = 3;
    FUN_10008cd10(&DAT_102311e68,&local_d0,&local_60);
    local_e0 = CONCAT44(local_e0._4_4_,0xb4d747);
    local_70 = 4;
    FUN_10008cd10(&DAT_102311e68,&local_e0,&local_70);
    local_38 = 0x5aa3ff;
    local_80 = 5;
    FUN_10008cd10(&DAT_102311e68,&local_38,&local_80);
    local_44 = 0xc08ed8;
    local_90 = 6;
    FUN_10008cd10(&DAT_102311e68,&local_44,&local_90);
    local_54 = 0x808080;
    local_a0 = 7;
    FUN_10008cd10(&DAT_102311e68,&local_54,&local_a0);
  }
  p_Var13 = DAT_102311e68;
  if (1 < *(int *)(DAT_102311e68 + 0x10) + 1U) {
    LOCK();
    pcVar12 = DAT_102311e68 + 0x10;
    *(int *)pcVar12 = *(int *)pcVar12 + 1;
    UNLOCK();
    local_64 = CONCAT31(local_64._1_3_,*(int *)pcVar12 != 0);
  }
  p_Var9 = p_Var13;
  if ((((byte)p_Var13[0x28] & 1) == 0) && (1 < *(uint *)(p_Var13 + 0x10))) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var13,FUN_10008ceb0,0x8cee0,0x18);
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar12 = p_Var13 + 0x10;
        *(int *)pcVar12 = *(int *)pcVar12 + -1;
        UNLOCK();
        local_64 = CONCAT31(local_64._1_3_,*(int *)pcVar12 != 0);
        if (*(int *)pcVar12 != 0) goto LAB_100088b2e;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var13);
    }
  }
LAB_100088b2e:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar6 = FUN_1001902a0(uVar8);
  local_130 = 0;
  uVar8 = 0;
  if (*(int *)(p_Var9 + 0x14) != 0) {
    p_Var13 = p_Var9;
    if (*(uint *)(p_Var9 + 0x20) != 0) {
      for (p_Var10 = *(_func_void_Node_ptr_void_ptr **)
                      (*(long *)(p_Var9 + 8) +
                      ((ulong)(*(uint *)(p_Var9 + 0x24) ^ uVar6) % (ulong)*(uint *)(p_Var9 + 0x20))
                      * 8);
          (p_Var13 = p_Var9, p_Var10 != p_Var9 &&
          ((*(uint *)(p_Var10 + 8) != (*(uint *)(p_Var9 + 0x24) ^ uVar6) ||
           (p_Var13 = p_Var10, uVar6 != *(uint *)(p_Var10 + 0xc)))));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var10) {
      }
    }
    pcVar12 = (code *)&local_130;
    if (p_Var13 != p_Var9) {
      pcVar12 = p_Var13 + 0x10;
    }
    uVar8 = *(undefined8 *)pcVar12;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setColor__10226a070,uVar8);
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar12 = p_Var9 + 0x10;
      *(int *)pcVar12 = *(int *)pcVar12 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)pcVar12 != 0);
      if (*(int *)pcVar12 != 0) goto LAB_100088be7;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var9);
  }
LAB_100088be7:
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  if ((DAT_102311e80 == '\0') && (iVar5 = ___cxa_guard_acquire(&DAT_102311e80), iVar5 != 0)) {
    DAT_102311e78 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10008c730,&DAT_102311e78,0x100000000);
    ___cxa_guard_release(&DAT_102311e80);
  }
  if (*(int *)(DAT_102311e78 + 0x14) == 0) {
    local_38 = 7;
    local_40 = 3;
    FUN_10008cef0(&DAT_102311e78,&local_38,&local_40);
    local_44 = 8;
    local_50 = 0;
    FUN_10008cef0(&DAT_102311e78,&local_44,&local_50);
    local_54 = 9;
    local_60 = 1;
    FUN_10008cef0(&DAT_102311e78,&local_54,&local_60);
    local_64 = 10;
    local_70 = 2;
    FUN_10008cef0(&DAT_102311e78,&local_64,&local_70);
    local_74 = 0xb;
    local_80 = 10;
    FUN_10008cef0(&DAT_102311e78,&local_74,&local_80);
    local_84 = 0xc;
    local_90 = 7;
    FUN_10008cef0(&DAT_102311e78,&local_84,&local_90);
    local_94 = 0xd;
    local_a0 = 9;
    FUN_10008cef0(&DAT_102311e78,&local_94,&local_a0);
    local_a4 = 0xe;
    local_b0 = 4;
    FUN_10008cef0(&DAT_102311e78,&local_a4,&local_b0);
    local_b4 = 0xf;
    local_c0 = 5;
    FUN_10008cef0(&DAT_102311e78,&local_b4,&local_c0);
    local_c4 = 0x10;
    local_d0 = 6;
    FUN_10008cef0(&DAT_102311e78,&local_c4,&local_d0);
    local_d4 = 0xff;
    local_e0 = 8;
    FUN_10008cef0(&DAT_102311e78,&local_d4,&local_e0);
  }
  p_Var13 = DAT_102311e78;
  if (1 < *(int *)(DAT_102311e78 + 0x10) + 1U) {
    LOCK();
    pcVar12 = DAT_102311e78 + 0x10;
    *(int *)pcVar12 = *(int *)pcVar12 + 1;
    local_31 = *(int *)pcVar12 != 0;
    UNLOCK();
  }
  p_Var9 = p_Var13;
  if ((((byte)p_Var13[0x28] & 1) == 0) && (1 < *(uint *)(p_Var13 + 0x10))) {
    p_Var9 = (_func_void_Node_ptr_void_ptr *)
             QHashData::detach_helper(p_Var13,FUN_10008d090,0x8d0c0,0x18);
    if (*(int *)(p_Var13 + 0x10) != -1) {
      if (*(int *)(p_Var13 + 0x10) != 0) {
        LOCK();
        pcVar12 = p_Var13 + 0x10;
        *(int *)pcVar12 = *(int *)pcVar12 + -1;
        local_31 = *(int *)pcVar12 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100088e74;
      }
      QHashData::free_helper((_func_void_Node_ptr *)p_Var13);
    }
  }
LAB_100088e74:
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar6 = FUN_10018f860(uVar8);
  local_138 = 8;
  uVar8 = 8;
  if (*(int *)(p_Var9 + 0x14) != 0) {
    p_Var13 = p_Var9;
    if (*(uint *)(p_Var9 + 0x20) != 0) {
      for (p_Var10 = *(_func_void_Node_ptr_void_ptr **)
                      (*(long *)(p_Var9 + 8) +
                      ((ulong)(*(uint *)(p_Var9 + 0x24) ^ uVar6) % (ulong)*(uint *)(p_Var9 + 0x20))
                      * 8);
          (p_Var13 = p_Var9, p_Var10 != p_Var9 &&
          ((*(uint *)(p_Var10 + 8) != (*(uint *)(p_Var9 + 0x24) ^ uVar6) ||
           (p_Var13 = p_Var10, uVar6 != *(uint *)(p_Var10 + 0xc)))));
          p_Var10 = *(_func_void_Node_ptr_void_ptr **)p_Var10) {
      }
    }
    pcVar12 = (code *)&local_138;
    if (p_Var13 != p_Var9) {
      pcVar12 = p_Var13 + 0x10;
    }
    uVar8 = *(undefined8 *)pcVar12;
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmOsFamily__10226a078,uVar8);
  if (*(int *)(p_Var9 + 0x10) != -1) {
    if (*(int *)(p_Var9 + 0x10) != 0) {
      LOCK();
      pcVar12 = p_Var9 + 0x10;
      *(int *)pcVar12 = *(int *)pcVar12 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)pcVar12 != 0);
      if (*(int *)pcVar12 != 0) goto LAB_100088f37;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var9);
  }
LAB_100088f37:
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar8 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
  {
    uVar8 = *(undefined8 *)(param_1 + 0x28);
  }
  uVar7 = FUN_10018f890(uVar8);
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setVmOsVersion__10226a080,uVar7);
  uVar14 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar14 = *(undefined8 *)(param_1 + 0x28);
  }
  FUN_10018d860(&local_140,uVar14);
  FUN_100087800(param_1,&local_140);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      UNLOCK();
      local_40 = CONCAT71(local_40._1_7_,*(int *)local_140 != 0);
      if (*(int *)local_140 != 0) goto LAB_100088fd0;
    }
    QArrayData::deallocate(local_140,2,8);
  }
LAB_100088fd0:
  lVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)
                     (*(undefined8 *)(param_1 + 0x18),PTR_s_vmSize_10226a018);
  if (lVar11 == 0) {
    uVar14 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_10226a848,PTR_s_numberWithInt__1022698b8,0)
    ;
    (*(code *)puVar1)(uVar14,PTR_s_setVmSize__10226a028,uVar8);
    FUN_1000878e0(param_1);
  }
  uVar8 = FUN_1006915d0();
  uVar14 = 0;
  if ((*(long *)(param_1 + 0x20) != 0) && (uVar14 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)
     ) {
    uVar14 = *(undefined8 *)(param_1 + 0x28);
  }
  lVar11 = FUN_100691620(uVar8,0xc,uVar14);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  if (lVar11 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = QAction::isVisible();
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar14,PTR_s_setDevPanelAvailable__10226a0d8,uVar3);
  FUN_100087c70(param_1);
  FUN_1000897a0(param_1);
  FUN_100089af0(param_1);
  return;
}

