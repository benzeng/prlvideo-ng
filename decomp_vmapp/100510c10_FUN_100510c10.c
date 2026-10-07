
bool FUN_100510c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  QArrayData *pQVar1;
  QArrayData *pQVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  long lVar16;
  QArrayData *pQVar17;
  QArrayData *local_140;
  long local_128;
  QArrayData *local_120;
  undefined8 local_118;
  undefined4 local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  QArrayData *local_e0;
  long local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined8 local_88;
  undefined4 local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_118 = param_3;
  local_110 = param_4;
  QMetaMethod::name();
  uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithFormat__100bed9f0,&cf__s,
                     local_120 + *(long *)(local_120 + 0x10));
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar8,PTR_s_mutableCopy_100bed9f8);
  (*(code *)PTR__objc_release_100ba25f0)(uVar8);
  iVar5 = QMetaMethod::parameterCount();
  if ((0 < iVar5) &&
     ((*(code *)PTR__objc_msgSend_100ba25e8)(uVar9,PTR_s_appendString__100beda00,&cf__), 1 < iVar5))
  {
    lVar16 = 1;
    do {
      puVar3 = PTR__OBJC_CLASS___NSString_100bedb00;
      QMetaMethod::parameterNames();
      pQVar17 = (QArrayData *)PTR_shared_null_100ba20d0;
      if ((lVar16 < (long)*(int *)(local_128 + 0xc) - (long)*(int *)(local_128 + 8)) &&
         (pQVar17 = *(QArrayData **)(local_128 + 0x10 + (*(int *)(local_128 + 8) + lVar16) * 8),
         1 < *(int *)pQVar17 + 1U)) {
        LOCK();
        *(int *)pQVar17 = *(int *)pQVar17 + 1;
        local_31 = *(int *)pQVar17 != 0;
        UNLOCK();
      }
      uVar8 = (*(code *)PTR__objc_msgSend_100ba25e8)
                        (puVar3,PTR_s_stringWithFormat__100bed9f0,&cf__s_,
                         pQVar17 + *(long *)(pQVar17 + 0x10));
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)PTR__objc_msgSend_100ba25e8)(uVar9,PTR_s_appendString__100beda00,uVar8);
      (*(code *)PTR__objc_release_100ba25f0)(uVar8);
      if (*(int *)pQVar17 != -1) {
        if (*(int *)pQVar17 != 0) {
          LOCK();
          *(int *)pQVar17 = *(int *)pQVar17 + -1;
          local_31 = *(int *)pQVar17 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100510dc8;
        }
        QArrayData::deallocate(pQVar17,1,8);
      }
LAB_100510dc8:
      FUN_1000506b0(&local_128);
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar5);
  }
  uVar8 = _NSSelectorFromString(uVar9);
  (*(code *)PTR__objc_release_100ba25f0)(uVar9);
  if (*(int *)local_120 != -1) {
    if (*(int *)local_120 != 0) {
      LOCK();
      *(int *)local_120 = *(int *)local_120 + -1;
      local_31 = *(int *)local_120 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100510e32;
    }
    QArrayData::deallocate(local_120,1,8);
  }
LAB_100510e32:
  local_f0 = param_3;
  local_e8 = param_4;
  QByteArray::QByteArray((QByteArray *)&local_f8,"@:",-1);
  uVar6 = QMetaMethod::returnType();
  lVar16 = FUN_100514c80(uVar6);
  pQVar17 = (QArrayData *)PTR_shared_null_100ba20d0;
  if (lVar16 != 0) {
    local_100 = *(QArrayData **)(lVar16 + 0x18);
    if (1 < *(int *)local_100 + 1U) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + 1;
      local_31 = *(int *)local_100 != 0;
      UNLOCK();
    }
    QByteArray::prepend((QByteArray *)&local_f8);
    if (*(int *)local_100 != -1) {
      if (*(int *)local_100 != 0) {
        LOCK();
        *(int *)local_100 = *(int *)local_100 + -1;
        local_31 = *(int *)local_100 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100510eec;
      }
      QArrayData::deallocate(local_100,1,8);
    }
LAB_100510eec:
    for (iVar5 = 0; iVar7 = QMetaMethod::parameterCount(), iVar5 < iVar7; iVar5 = iVar5 + 1) {
      uVar6 = QMetaMethod::parameterType((int)&local_f0);
      lVar16 = FUN_100514c80(uVar6);
      pQVar17 = (QArrayData *)PTR_shared_null_100ba20d0;
      if (lVar16 == 0) goto LAB_10051100f;
      local_108 = *(QArrayData **)(lVar16 + 0x18);
      if (1 < *(int *)local_108 + 1U) {
        LOCK();
        *(int *)local_108 = *(int *)local_108 + 1;
        local_31 = *(int *)local_108 != 0;
        UNLOCK();
      }
      QByteArray::append((QByteArray *)&local_f8);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100510f10;
        }
        QArrayData::deallocate(local_108,1,8);
      }
LAB_100510f10:
    }
    pQVar17 = local_f8;
    if (1 < *(int *)local_f8 + 1U) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + 1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      pQVar17 = local_f8;
    }
  }
LAB_10051100f:
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_31 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100511045;
    }
    QArrayData::deallocate(local_f8,1,8);
  }
LAB_100511045:
  if (*(int *)(pQVar17 + 4) == 0) {
    uVar8 = _NSStringFromSelector(uVar8);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    _NSLog(&cf_Can_taddmethod___,uVar8);
    (*(code *)PTR__objc_release_100ba25f0)(uVar8);
    bVar15 = false;
    goto LAB_100511b03;
  }
  iVar5 = QMetaMethod::returnType();
  puVar3 = PTR__OBJC_CLASS___NSString_100bedb00;
  if (iVar5 == 0x26) {
    pcVar10 = FUN_1005123a0;
  }
  else if (iVar5 == 6) {
    pcVar10 = FUN_100513140;
  }
  else {
    pcVar10 = FUN_100513ee0;
  }
  local_90 = (QArrayData *)PTR_shared_null_100ba20d0;
  local_88 = param_3;
  local_80 = param_4;
  uVar6 = QMetaMethod::returnType();
  lVar16 = FUN_100514c80(uVar6);
  if (lVar16 == 0) {
    local_140 = (QArrayData *)PTR_shared_null_100ba20d0;
  }
  else {
    QByteArray::QByteArray((QByteArray *)&local_a0,"- (",-1);
    local_a8 = *(QArrayData **)(lVar16 + 0x10);
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    local_78 = local_a0;
    if (1 < *(int *)local_a0 + 1U) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + 1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
    }
    puVar11 = (undefined8 *)QByteArray::append((QByteArray *)&local_78);
    pQVar1 = (QArrayData *)*puVar11;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005111a9;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_1005111a9:
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    local_70 = pQVar1;
    puVar11 = (undefined8 *)QByteArray::append((char *)&local_70);
    pQVar2 = (QArrayData *)*puVar11;
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100511214;
      }
      QArrayData::deallocate(local_70,1,8);
    }
LAB_100511214:
    QMetaMethod::name();
    if (1 < *(int *)pQVar2 + 1U) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + 1;
      local_31 = *(int *)pQVar2 != 0;
      UNLOCK();
    }
    local_68 = pQVar2;
    puVar11 = (undefined8 *)QByteArray::append((QByteArray *)&local_68);
    local_98 = (QArrayData *)*puVar11;
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100511294;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100511294:
    QByteArray::operator=((QByteArray *)&local_90,(QByteArray *)&local_98);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005112dd;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_1005112dd:
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_31 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100511313;
      }
      QArrayData::deallocate(local_b0,1,8);
    }
LAB_100511313:
    if (*(int *)pQVar2 != -1) {
      if (*(int *)pQVar2 != 0) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + -1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10051133e;
      }
      QArrayData::deallocate(pQVar2,1,8);
    }
LAB_10051133e:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10051136b;
      }
      QArrayData::deallocate(pQVar1,1,8);
    }
LAB_10051136b:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005113a1;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_1005113a1:
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_31 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1005113d7;
      }
      QArrayData::deallocate(local_a0,1,8);
    }
LAB_1005113d7:
    lVar16 = 0;
    while( true ) {
      iVar5 = QMetaMethod::parameterCount();
      if (iVar5 <= lVar16) break;
      uVar6 = QMetaMethod::parameterType((int)&local_88);
      lVar12 = FUN_100514c80(uVar6);
      if (lVar12 == 0) {
        local_140 = (QArrayData *)PTR_shared_null_100ba20d0;
        goto LAB_100511938;
      }
      QByteArray::QByteArray((QByteArray *)&local_c0,"(",-1);
      local_c8 = *(QArrayData **)(lVar12 + 0x10);
      if (1 < *(int *)local_c8 + 1U) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + 1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
      }
      local_60 = local_c0;
      if (1 < *(int *)local_c0 + 1U) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + 1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
      }
      puVar11 = (undefined8 *)QByteArray::append((QByteArray *)&local_60);
      pQVar1 = (QArrayData *)*puVar11;
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005114d8;
        }
        QArrayData::deallocate(local_60,1,8);
      }
LAB_1005114d8:
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      local_58 = pQVar1;
      puVar11 = (undefined8 *)QByteArray::append((char *)&local_58);
      local_b8 = (QArrayData *)*puVar11;
      if (1 < *(int *)local_b8 + 1U) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + 1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
      }
      if (*(int *)local_58 != -1) {
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100511548;
        }
        QArrayData::deallocate(local_58,1,8);
      }
LAB_100511548:
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_31 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100511573;
        }
        QArrayData::deallocate(pQVar1,1,8);
      }
LAB_100511573:
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005115a9;
        }
        QArrayData::deallocate(local_c8,1,8);
      }
LAB_1005115a9:
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005115df;
        }
        QArrayData::deallocate(local_c0,1,8);
      }
LAB_1005115df:
      QMetaMethod::parameterNames();
      if (lVar16 < (long)*(int *)(local_d8 + 0xc) - (long)*(int *)(local_d8 + 8)) {
        local_d0 = *(QArrayData **)(local_d8 + 0x10 + (*(int *)(local_d8 + 8) + lVar16) * 8);
        if (1 < *(int *)local_d0 + 1U) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + 1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
        }
      }
      else {
        local_d0 = (QArrayData *)PTR_shared_null_100ba20d0;
      }
      FUN_1000506b0(&local_d8);
      if (0 < lVar16) {
        QByteArray::append((QByteArray *)&local_90);
      }
      QByteArray::QByteArray((QByteArray *)&local_50,":",-1);
      puVar11 = (undefined8 *)QByteArray::append((QByteArray *)&local_50);
      pQVar1 = (QArrayData *)*puVar11;
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005116c5;
        }
        QArrayData::deallocate(local_50,1,8);
      }
LAB_1005116c5:
      if (1 < *(int *)pQVar1 + 1U) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + 1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
      }
      local_48 = pQVar1;
      puVar11 = (undefined8 *)QByteArray::append((QByteArray *)&local_48);
      pQVar2 = (QArrayData *)*puVar11;
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      if (*(int *)local_48 != -1) {
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          local_31 = *(int *)local_48 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100511738;
        }
        QArrayData::deallocate(local_48,1,8);
      }
LAB_100511738:
      if (1 < *(int *)pQVar2 + 1U) {
        LOCK();
        *(int *)pQVar2 = *(int *)pQVar2 + 1;
        local_31 = *(int *)pQVar2 != 0;
        UNLOCK();
      }
      local_40 = pQVar2;
      puVar11 = (undefined8 *)QByteArray::append((char *)&local_40);
      local_e0 = (QArrayData *)*puVar11;
      if (1 < *(int *)local_e0 + 1U) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + 1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
      }
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_31 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005117ac;
        }
        QArrayData::deallocate(local_40,1,8);
      }
LAB_1005117ac:
      QByteArray::append((QByteArray *)&local_90);
      if (*(int *)local_e0 != -1) {
        if (*(int *)local_e0 != 0) {
          LOCK();
          *(int *)local_e0 = *(int *)local_e0 + -1;
          local_31 = *(int *)local_e0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005117f5;
        }
        QArrayData::deallocate(local_e0,1,8);
      }
LAB_1005117f5:
      if (*(int *)pQVar2 != -1) {
        if (*(int *)pQVar2 != 0) {
          LOCK();
          *(int *)pQVar2 = *(int *)pQVar2 + -1;
          local_31 = *(int *)pQVar2 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100511824;
        }
        QArrayData::deallocate(pQVar2,1,8);
      }
LAB_100511824:
      if (*(int *)pQVar1 != -1) {
        if (*(int *)pQVar1 != 0) {
          LOCK();
          *(int *)pQVar1 = *(int *)pQVar1 + -1;
          local_31 = *(int *)pQVar1 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100511855;
        }
        QArrayData::deallocate(pQVar1,1,8);
      }
LAB_100511855:
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10051188f;
        }
        QArrayData::deallocate(local_d0,1,8);
      }
LAB_10051188f:
      if (*(int *)local_b8 != -1) {
        if (*(int *)local_b8 != 0) {
          LOCK();
          *(int *)local_b8 = *(int *)local_b8 + -1;
          local_31 = *(int *)local_b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100511400;
        }
        QArrayData::deallocate(local_b8,1,8);
      }
LAB_100511400:
      lVar16 = lVar16 + 1;
    }
    QByteArray::trimmed();
  }
LAB_100511938:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10051196e;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_10051196e:
  uVar9 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (puVar3,PTR_s_stringWithUTF8String__100bed208,
                     local_140 + *(long *)(local_140 + 0x10));
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  if (*(int *)local_140 != -1) {
    if (*(int *)local_140 != 0) {
      LOCK();
      *(int *)local_140 = *(int *)local_140 + -1;
      local_31 = *(int *)local_140 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1005119ce;
    }
    QArrayData::deallocate(local_140,1,8);
  }
LAB_1005119ce:
  uVar13 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_class_100bed938);
  cVar4 = _class_addMethod(uVar13,uVar8,pcVar10,pQVar17 + *(long *)(pQVar17 + 0x10));
  if (cVar4 == '\0') {
    _NSLog(&cf_Addingmethod__failed,uVar9);
  }
  else {
    _NSLog(&cf_Methodadded___,uVar9);
    uVar13 = (*(code *)PTR__objc_msgSend_100ba25e8)(PTR_MethodInfo_100bedc38,PTR_s_new_100bed280);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar13,PTR_s_setMetaMethod__100bed9d0,param_3,param_4);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar13,PTR_s_setImp__100bed9d8,pcVar10);
    uVar14 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_class_100bed938);
    uVar14 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar14,PTR_s_qtMethods_100bed9e0);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    uVar8 = _NSStringFromSelector(uVar8);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)PTR__objc_msgSend_100ba25e8)(uVar14,PTR_s_setObject_forKey__100bed9e8,uVar13,uVar8);
    puVar3 = PTR__objc_release_100ba25f0;
    (*(code *)PTR__objc_release_100ba25f0)(uVar8);
    (*(code *)puVar3)(uVar14);
    (*(code *)puVar3)(uVar13);
  }
  bVar15 = cVar4 != '\0';
  (*(code *)PTR__objc_release_100ba25f0)(uVar9);
LAB_100511b03:
  if (*(int *)pQVar17 != -1) {
    if (*(int *)pQVar17 != 0) {
      LOCK();
      *(int *)pQVar17 = *(int *)pQVar17 + -1;
      local_31 = *(int *)pQVar17 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return bVar15;
      }
    }
    QArrayData::deallocate(pQVar17,1,8);
  }
  return bVar15;
}

