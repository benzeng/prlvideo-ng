
undefined1 FUN_100df2ca0(undefined8 param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  QArrayData *pQVar12;
  undefined8 *puVar13;
  Data *pDVar14;
  undefined1 uVar15;
  Data *pDVar16;
  QArrayData *pQVar17;
  QArrayData *local_78;
  AnonymousUnion0 local_70;
  QArrayData *local_68;
  undefined8 local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  puVar3 = PTR__objc_msgSend_1021e1c68;
  uVar8 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar8 = (*(code *)puVar3)(uVar8,PTR_s_init_102268ca8);
  uVar9 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSMutableArray_10226a840,PTR_s_array_1022698b0);
  local_58 = (Data *)*param_2;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 == 0) {
      QListData::detach((int)&local_58);
      iVar1 = *(int *)(local_58 + 8);
      if (iVar1 != *(int *)(local_58 + 0xc)) {
        puVar13 = (undefined8 *)(*param_2 + 0x10 + (long)*(int *)(*param_2 + 8) * 8);
        pDVar14 = local_58 + (long)iVar1 * 8 + 0x10;
        lVar10 = (long)*(int *)(local_58 + 0xc) * 8 + (long)iVar1 * -8;
        do {
          piVar2 = (int *)*puVar13;
          *(int **)pDVar14 = piVar2;
          if (1 < *piVar2 + 1U) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            local_31 = *piVar2 != 0;
            UNLOCK();
          }
          pDVar14 = pDVar14 + 8;
          puVar13 = puVar13 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
    }
  }
  puVar5 = PTR_s_addObject__1022692e8;
  puVar4 = PTR_s_stringWithQString__102268d00;
  local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
  local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
  if (*(int *)(local_58 + 8) != *(int *)(local_58 + 0xc)) {
    do {
      local_40 = 1;
      uVar11 = (*(code *)PTR__objc_msgSend_1021e1c68)(PTR__OBJC_CLASS___NSString_10226a7c8,puVar4);
      (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,puVar5,uVar11);
      local_50 = local_50 + 8;
    } while (local_50 != local_48);
  }
  pDVar14 = local_58;
  local_40 = 1;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df2f28;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar10 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar16 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar12 = *(QArrayData **)pDVar16;
        if (*(int *)pQVar12 == 0) {
LAB_100df2f00:
          QArrayData::deallocate(pQVar12,2,8);
        }
        else if (*(int *)pQVar12 != -1) {
          LOCK();
          *(int *)pQVar12 = *(int *)pQVar12 + -1;
          local_31 = *(int *)pQVar12 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar12 = *(QArrayData **)pDVar16;
            goto LAB_100df2f00;
          }
        }
        pDVar16 = pDVar16 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(pDVar14);
  }
LAB_100df2f28:
  puVar4 = PTR__OBJC_CLASS___NSURL_10226a8d0;
  uVar11 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSString_10226a7c8,PTR_s_stringWithQString__102268d00
                             ,param_1);
  uVar11 = (*(code *)puVar3)(puVar4,PTR_s_fileURLWithPath__1022699c8,uVar11);
  local_60 = 0;
  cVar6 = (*(code *)puVar3)(uVar11,PTR_s_setResourceValue_forKey_error__10226a6b0,uVar9,
                            &cf_NSURLTagNamesKey,&local_60);
  uVar15 = 1;
  if (cVar6 != '\0') goto LAB_100df3106;
  pQVar12 = (QArrayData *)QString::fromAscii_helper(", ",2);
  QtPrivate::QStringList_join
            ((QStringList *)&local_70.field0,(QChar *)param_2,
             (int)*(undefined8 *)(pQVar12 + 0x10) + (int)pQVar12);
  QString::toUtf8();
  pQVar17 = local_68 + *(long *)(local_68 + 0x10);
  QString::toUtf8();
  lVar10 = *(long *)(local_78 + 0x10);
  uVar7 = (*(code *)PTR__objc_msgSend_1021e1c68)(local_60,PTR_s_code_10226a6a0);
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(local_60,PTR_s_localizedDescription_10226a6a8);
  uVar9 = (*(code *)PTR__objc_msgSend_1021e1c68)(uVar9,PTR_s_UTF8String_1022699e8);
  FUN_100df99c0("","FinderTagsHelper",0,"Can\'t set tags \'[%s]\' for [%s], error %i: %s",pQVar17,
                local_78 + lVar10,uVar7,uVar9);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df3074;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_100df3074:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df30a7;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_100df30a7:
  if (*(int *)local_70.field1 != -1) {
    if (*(int *)local_70.field1 != 0) {
      LOCK();
      *(int *)local_70.field1 = *(int *)local_70.field1 + -1;
      local_31 = *(int *)local_70.field1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df30d7;
    }
    QArrayData::deallocate((QArrayData *)local_70.field1,2,8);
  }
LAB_100df30d7:
  if (*(int *)pQVar12 != -1) {
    if (*(int *)pQVar12 != 0) {
      LOCK();
      *(int *)pQVar12 = *(int *)pQVar12 + -1;
      local_31 = *(int *)pQVar12 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100df3104;
    }
    QArrayData::deallocate(pQVar12,2,8);
  }
LAB_100df3104:
  uVar15 = 0;
LAB_100df3106:
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar8,PTR_s_release_1022699b8);
  return uVar15;
}

