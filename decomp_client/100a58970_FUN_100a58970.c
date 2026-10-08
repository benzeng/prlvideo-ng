
undefined8 FUN_100a58970(undefined8 param_1,QString *param_2)

{
  short sVar1;
  undefined *puVar2;
  undefined *self;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  QTypedArrayData<unsigned_short> *pQVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  QArrayData *pQVar11;
  int iVar12;
  QString local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  puVar2 = PTR__objc_msgSend_1021e1c68;
  uVar4 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (PTR__OBJC_CLASS___NSAutoreleasePool_10226a970,PTR_s_alloc_102268b58);
  uVar4 = (*(code *)puVar2)(uVar4,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDateFormatter_10226aaf8,PTR_s_alloc_102268b58);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_init_102268ca8);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_autorelease_102269a10);
  (*(code *)puVar2)(uVar5,PTR_s_setDateStyle__10226a580,param_1);
  self = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_dateFormat_10226a590);
  if (self == (undefined *)0x0) {
    local_98 = (QArrayData *)0x0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_98,(ID)self,PTR_s_QStringWithString__1022696d0,uVar5);
  }
  local_a0.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("DFgwWlQqYuU",0xb);
  QString::fromUtf8_helper((char *)&local_90,0x1e3cfb6);
  QString::append(&local_a0);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a58aaf;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_100a58aaf:
  local_a8 = (QArrayData *)QString::fromAscii_helper("dEecMLyG",8);
  QString::fromUtf8_helper((char *)&local_88,0x1e41978);
  QString::operator=(param_2,&local_88);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a58b15;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_100a58b15:
  if (0 < *(int *)(local_98 + 4)) {
    bVar9 = false;
    iVar12 = 0;
    do {
      sVar1 = *(short *)(local_98 + (long)iVar12 * 2 + *(long *)(local_98 + 0x10));
      uVar8 = (uint)param_2;
      if (sVar1 == 0x27) {
        pQVar6 = param_2->field0_0x0;
        uVar7 = *(uint *)(pQVar6 + 4);
        if ((1 < *(uint *)pQVar6) || ((*(uint *)(pQVar6 + 8) & 0x7fffffff) < uVar7 + 2)) {
          QString::reallocData(uVar8,SUB41(uVar7 + 2,0));
          pQVar6 = param_2->field0_0x0;
          uVar7 = *(uint *)(pQVar6 + 4);
        }
        bVar9 = (bool)(bVar9 ^ 1);
        *(uint *)(pQVar6 + 4) = uVar7 + 1;
        *(undefined2 *)(pQVar6 + (long)(int)uVar7 * 2 + *(long *)(pQVar6 + 0x10)) = 0x27;
        *(undefined2 *)(pQVar6 + (long)(int)*(uint *)(pQVar6 + 4) * 2 + *(long *)(pQVar6 + 0x10)) =
             0;
      }
      else if (bVar9) {
        pQVar6 = param_2->field0_0x0;
        uVar7 = *(uint *)(pQVar6 + 4);
        if ((1 < *(uint *)pQVar6) || ((*(uint *)(pQVar6 + 8) & 0x7fffffff) < uVar7 + 2)) {
          QString::reallocData(uVar8,SUB41(uVar7 + 2,0));
LAB_100a593e9:
          pQVar6 = param_2->field0_0x0;
          uVar7 = *(uint *)(pQVar6 + 4);
        }
LAB_100a593ef:
        *(uint *)(pQVar6 + 4) = uVar7 + 1;
        *(short *)(pQVar6 + (long)(int)uVar7 * 2 + *(long *)(pQVar6 + 0x10)) = sVar1;
        *(undefined2 *)(pQVar6 + (long)(int)*(uint *)(pQVar6 + 4) * 2 + *(long *)(pQVar6 + 0x10)) =
             0;
      }
      else {
        iVar3 = QString::indexOf(&local_a0,sVar1,0,1);
        if (iVar3 == -1) {
          iVar3 = QString::indexOf(&local_a8,sVar1,0,1);
          if (iVar3 == -1) {
            pQVar6 = param_2->field0_0x0;
            uVar7 = *(uint *)(pQVar6 + 4);
            if ((1 < *(uint *)pQVar6) || ((*(uint *)(pQVar6 + 8) & 0x7fffffff) < uVar7 + 2)) {
              QString::reallocData(uVar8,SUB41(uVar7 + 2,0));
              goto LAB_100a593e9;
            }
            goto LAB_100a593ef;
          }
          QString::QString(&local_b0,sVar1);
          if (iVar12 + 1 < *(int *)(local_98 + 4)) {
            lVar10 = (long)(iVar12 + 1);
            pQVar11 = local_98;
            do {
              if (sVar1 != *(short *)(pQVar11 + lVar10 * 2 + *(long *)(pQVar11 + 0x10))) break;
              uVar8 = *(uint *)(local_b0.field0_0x0 + 4);
              if ((1 < *(uint *)local_b0.field0_0x0) ||
                 ((*(uint *)(local_b0.field0_0x0 + 8) & 0x7fffffff) < uVar8 + 2)) {
                QString::reallocData((uint)&local_b0,SUB41(uVar8 + 2,0));
                uVar8 = *(uint *)(local_b0.field0_0x0 + 4);
                pQVar11 = local_98;
              }
              *(uint *)(local_b0.field0_0x0 + 4) = uVar8 + 1;
              *(short *)(local_b0.field0_0x0 +
                        (long)(int)uVar8 * 2 + *(long *)(local_b0.field0_0x0 + 0x10)) = sVar1;
              *(undefined2 *)
               (local_b0.field0_0x0 +
               (long)(int)*(uint *)(local_b0.field0_0x0 + 4) * 2 +
               *(long *)(local_b0.field0_0x0 + 0x10)) = 0;
              lVar10 = lVar10 + 1;
              iVar12 = iVar12 + 1;
            } while ((int)lVar10 < *(int *)(pQVar11 + 4));
          }
          iVar3 = QString::compare_helper
                            ((QArrayData *)
                             (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)),
                             *(uint *)(local_b0.field0_0x0 + 4),"d",0xffffffff,1);
          if (iVar3 == 0) {
            QString::fromUtf8_helper((char *)&local_80,0x1de5749);
            QString::append(param_2);
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100a59558;
              }
              QArrayData::deallocate(local_80,2,8);
            }
          }
          else {
            iVar3 = QString::compare_helper
                              ((QArrayData *)
                               (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)),
                               *(uint *)(local_b0.field0_0x0 + 4),"dd",0xffffffff,1);
            if (iVar3 == 0) {
              QString::fromUtf8_helper((char *)&local_78,0x1e1f3b0);
              QString::append(param_2);
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100a59558;
                }
                QArrayData::deallocate(local_78,2,8);
              }
            }
            else {
              iVar3 = QString::compare_helper
                                ((QArrayData *)
                                 (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)),
                                 *(uint *)(local_b0.field0_0x0 + 4),"E",0xffffffff,1);
              if ((((((iVar3 == 0) ||
                     (iVar3 = QString::compare_helper
                                        ((QArrayData *)
                                         (local_b0.field0_0x0 +
                                         *(long *)(local_b0.field0_0x0 + 0x10)),
                                         *(uint *)(local_b0.field0_0x0 + 4),"EE",0xffffffff,1),
                     iVar3 == 0)) ||
                    (iVar3 = QString::compare_helper
                                       ((QArrayData *)
                                        (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)
                                        ),*(uint *)(local_b0.field0_0x0 + 4),"EEE",0xffffffff,1),
                    iVar3 == 0)) ||
                   ((iVar3 = QString::compare_helper
                                       ((QArrayData *)
                                        (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)
                                        ),*(uint *)(local_b0.field0_0x0 + 4),"EEEEE",0xffffffff,1),
                    iVar3 == 0 ||
                    (iVar3 = QString::compare_helper
                                       ((QArrayData *)
                                        (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)
                                        ),*(uint *)(local_b0.field0_0x0 + 4),"EEEEEE",0xffffffff,1),
                    iVar3 == 0)))) ||
                  (iVar3 = QString::compare_helper
                                     ((QArrayData *)
                                      (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)),
                                      *(uint *)(local_b0.field0_0x0 + 4),"eee",0xffffffff,1),
                  iVar3 == 0)) ||
                 (((iVar3 = QString::compare_helper
                                      ((QArrayData *)
                                       (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10))
                                       ,*(uint *)(local_b0.field0_0x0 + 4),"eeeee",0xffffffff,1),
                   iVar3 == 0 ||
                   (iVar3 = QString::compare_helper
                                      ((QArrayData *)
                                       (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10))
                                       ,*(uint *)(local_b0.field0_0x0 + 4),"eeeeee",0xffffffff,1),
                   iVar3 == 0)) ||
                  ((iVar3 = QString::compare_helper
                                      ((QArrayData *)
                                       (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10))
                                       ,*(uint *)(local_b0.field0_0x0 + 4),"ccc",0xffffffff,1),
                   iVar3 == 0 ||
                   ((iVar3 = QString::compare_helper
                                       ((QArrayData *)
                                        (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)
                                        ),*(uint *)(local_b0.field0_0x0 + 4),"ccccc",0xffffffff,1),
                    iVar3 == 0 ||
                    (iVar3 = QString::compare_helper
                                       ((QArrayData *)
                                        (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)
                                        ),*(uint *)(local_b0.field0_0x0 + 4),"cccccc",0xffffffff,1),
                    iVar3 == 0)))))))) {
                QString::fromUtf8_helper((char *)&local_70,0x1e3d005);
                QString::append(param_2);
                if (*(int *)local_70 != -1) {
                  if (*(int *)local_70 != 0) {
                    LOCK();
                    *(int *)local_70 = *(int *)local_70 + -1;
                    local_31 = *(int *)local_70 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100a59558;
                  }
                  QArrayData::deallocate(local_70,2,8);
                }
              }
              else {
                iVar3 = QString::compare_helper
                                  ((QArrayData *)
                                   (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)),
                                   *(uint *)(local_b0.field0_0x0 + 4),"EEEE",0xffffffff,1);
                if (((iVar3 == 0) ||
                    (iVar3 = QString::compare_helper
                                       ((QArrayData *)
                                        (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)
                                        ),*(uint *)(local_b0.field0_0x0 + 4),"eeee",0xffffffff,1),
                    iVar3 == 0)) ||
                   (iVar3 = QString::compare_helper
                                      ((QArrayData *)
                                       (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10))
                                       ,*(uint *)(local_b0.field0_0x0 + 4),"cccc",0xffffffff,1),
                   iVar3 == 0)) {
                  QString::fromUtf8_helper((char *)&local_68,0x1e3d018);
                  QString::append(param_2);
                  if (*(int *)local_68 != -1) {
                    if (*(int *)local_68 != 0) {
                      LOCK();
                      *(int *)local_68 = *(int *)local_68 + -1;
                      local_31 = *(int *)local_68 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100a59558;
                    }
                    QArrayData::deallocate(local_68,2,8);
                  }
                }
                else {
                  iVar3 = QString::compare_helper
                                    ((QArrayData *)
                                     (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10)),
                                     *(uint *)(local_b0.field0_0x0 + 4),"M",0xffffffff,1);
                  if ((((iVar3 == 0) ||
                       (iVar3 = QString::compare_helper
                                          ((QArrayData *)
                                           (local_b0.field0_0x0 +
                                           *(long *)(local_b0.field0_0x0 + 0x10)),
                                           *(uint *)(local_b0.field0_0x0 + 4),"MM",0xffffffff,1),
                       iVar3 == 0)) ||
                      ((iVar3 = QString::compare_helper
                                          ((QArrayData *)
                                           (local_b0.field0_0x0 +
                                           *(long *)(local_b0.field0_0x0 + 0x10)),
                                           *(uint *)(local_b0.field0_0x0 + 4),"MMM",0xffffffff,1),
                       iVar3 == 0 ||
                       ((iVar3 = QString::compare_helper
                                           ((QArrayData *)
                                            (local_b0.field0_0x0 +
                                            *(long *)(local_b0.field0_0x0 + 0x10)),
                                            *(uint *)(local_b0.field0_0x0 + 4),"MMMM",0xffffffff,1),
                        iVar3 == 0 ||
                        (iVar3 = QString::compare_helper
                                           ((QArrayData *)
                                            (local_b0.field0_0x0 +
                                            *(long *)(local_b0.field0_0x0 + 0x10)),
                                            *(uint *)(local_b0.field0_0x0 + 4),"L",0xffffffff,1),
                        iVar3 == 0)))))) ||
                     ((iVar3 = QString::compare_helper
                                         ((QArrayData *)
                                          (local_b0.field0_0x0 +
                                          *(long *)(local_b0.field0_0x0 + 0x10)),
                                          *(uint *)(local_b0.field0_0x0 + 4),"LL",0xffffffff,1),
                      iVar3 == 0 ||
                      ((iVar3 = QString::compare_helper
                                          ((QArrayData *)
                                           (local_b0.field0_0x0 +
                                           *(long *)(local_b0.field0_0x0 + 0x10)),
                                           *(uint *)(local_b0.field0_0x0 + 4),"LLL",0xffffffff,1),
                       iVar3 == 0 ||
                       (iVar3 = QString::compare_helper
                                          ((QArrayData *)
                                           (local_b0.field0_0x0 +
                                           *(long *)(local_b0.field0_0x0 + 0x10)),
                                           *(uint *)(local_b0.field0_0x0 + 4),"LLLL",0xffffffff,1),
                       iVar3 == 0)))))) {
                    QString::append(param_2);
                  }
                  else {
                    iVar3 = QString::compare_helper
                                      ((QArrayData *)
                                       (local_b0.field0_0x0 + *(long *)(local_b0.field0_0x0 + 0x10))
                                       ,*(uint *)(local_b0.field0_0x0 + 4),"MMMMM",0xffffffff,1);
                    if ((iVar3 == 0) ||
                       (iVar3 = QString::compare_helper
                                          ((QArrayData *)
                                           (local_b0.field0_0x0 +
                                           *(long *)(local_b0.field0_0x0 + 0x10)),
                                           *(uint *)(local_b0.field0_0x0 + 4),"LLLLL",0xffffffff,1),
                       iVar3 == 0)) {
                      QString::fromUtf8_helper((char *)&local_60,0x1e3d022);
                      QString::append(param_2);
                      if (*(int *)local_60 != -1) {
                        if (*(int *)local_60 != 0) {
                          LOCK();
                          *(int *)local_60 = *(int *)local_60 + -1;
                          local_31 = *(int *)local_60 != 0;
                          UNLOCK();
                          if ((bool)local_31) goto LAB_100a59558;
                        }
                        QArrayData::deallocate(local_60,2,8);
                      }
                    }
                    else {
                      iVar3 = QString::compare_helper
                                        ((QArrayData *)
                                         (local_b0.field0_0x0 +
                                         *(long *)(local_b0.field0_0x0 + 0x10)),
                                         *(uint *)(local_b0.field0_0x0 + 4),"yy",0xffffffff,1);
                      if (iVar3 == 0) {
                        QString::fromUtf8_helper((char *)&local_58,0x1e3d043);
                        QString::append(param_2);
                        if (*(int *)local_58 != -1) {
                          if (*(int *)local_58 != 0) {
                            LOCK();
                            *(int *)local_58 = *(int *)local_58 + -1;
                            local_31 = *(int *)local_58 != 0;
                            UNLOCK();
                            if ((bool)local_31) goto LAB_100a59558;
                          }
                          QArrayData::deallocate(local_58,2,8);
                        }
                      }
                      else {
                        iVar3 = QString::compare_helper
                                          ((QArrayData *)
                                           (local_b0.field0_0x0 +
                                           *(long *)(local_b0.field0_0x0 + 0x10)),
                                           *(uint *)(local_b0.field0_0x0 + 4),"y",0xffffffff,1);
                        if ((((iVar3 == 0) ||
                             (iVar3 = QString::compare_helper
                                                ((QArrayData *)
                                                 (local_b0.field0_0x0 +
                                                 *(long *)(local_b0.field0_0x0 + 0x10)),
                                                 *(uint *)(local_b0.field0_0x0 + 4),"yyy",0xffffffff
                                                 ,1), iVar3 == 0)) ||
                            (iVar3 = QString::compare_helper
                                               ((QArrayData *)
                                                (local_b0.field0_0x0 +
                                                *(long *)(local_b0.field0_0x0 + 0x10)),
                                                *(uint *)(local_b0.field0_0x0 + 4),"yyyy",0xffffffff
                                                ,1), iVar3 == 0)) ||
                           (iVar3 = QString::compare_helper
                                              ((QArrayData *)
                                               (local_b0.field0_0x0 +
                                               *(long *)(local_b0.field0_0x0 + 0x10)),
                                               *(uint *)(local_b0.field0_0x0 + 4),"yyyyy",0xffffffff
                                               ,1), iVar3 == 0)) {
                          QString::fromUtf8_helper((char *)&local_50,0x1e3d04c);
                          QString::append(param_2);
                          if (*(int *)local_50 != -1) {
                            if (*(int *)local_50 != 0) {
                              LOCK();
                              *(int *)local_50 = *(int *)local_50 + -1;
                              local_31 = *(int *)local_50 != 0;
                              UNLOCK();
                              if ((bool)local_31) goto LAB_100a59558;
                            }
                            QArrayData::deallocate(local_50,2,8);
                          }
                        }
                        else {
                          iVar3 = QString::compare_helper
                                            ((QArrayData *)
                                             (local_b0.field0_0x0 +
                                             *(long *)(local_b0.field0_0x0 + 0x10)),
                                             *(uint *)(local_b0.field0_0x0 + 4),"G",0xffffffff,1);
                          if (iVar3 == 0) {
                            QString::fromUtf8_helper((char *)&local_48,0x1e3d057);
                            QString::append(param_2);
                            if (*(int *)local_48 != -1) {
                              if (*(int *)local_48 != 0) {
                                LOCK();
                                *(int *)local_48 = *(int *)local_48 + -1;
                                local_31 = *(int *)local_48 != 0;
                                UNLOCK();
                                if ((bool)local_31) goto LAB_100a59558;
                              }
                              QArrayData::deallocate(local_48,2,8);
                            }
                          }
                          else {
                            iVar3 = QString::compare_helper
                                              ((QArrayData *)
                                               (local_b0.field0_0x0 +
                                               *(long *)(local_b0.field0_0x0 + 0x10)),
                                               *(uint *)(local_b0.field0_0x0 + 4),"GG",0xffffffff,1)
                            ;
                            if (((iVar3 == 0) ||
                                (iVar3 = QString::compare_helper
                                                   ((QArrayData *)
                                                    (local_b0.field0_0x0 +
                                                    *(long *)(local_b0.field0_0x0 + 0x10)),
                                                    *(uint *)(local_b0.field0_0x0 + 4),"GGG",
                                                    0xffffffff,1), iVar3 == 0)) ||
                               ((iVar3 = QString::compare_helper
                                                   ((QArrayData *)
                                                    (local_b0.field0_0x0 +
                                                    *(long *)(local_b0.field0_0x0 + 0x10)),
                                                    *(uint *)(local_b0.field0_0x0 + 4),"GGGG",
                                                    0xffffffff,1), iVar3 == 0 ||
                                (iVar3 = QString::compare_helper
                                                   ((QArrayData *)
                                                    (local_b0.field0_0x0 +
                                                    *(long *)(local_b0.field0_0x0 + 0x10)),
                                                    *(uint *)(local_b0.field0_0x0 + 4),"GGGGG",
                                                    0xffffffff,1), iVar3 == 0)))) {
                              QString::fromUtf8_helper((char *)&local_40,0x1e3d06b);
                              QString::append(param_2);
                              if (*(int *)local_40 != -1) {
                                if (*(int *)local_40 != 0) {
                                  LOCK();
                                  *(int *)local_40 = *(int *)local_40 + -1;
                                  local_31 = *(int *)local_40 != 0;
                                  UNLOCK();
                                  if ((bool)local_31) goto LAB_100a59558;
                                }
                                QArrayData::deallocate(local_40,2,8);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LAB_100a59558:
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100a59412;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
        }
      }
LAB_100a59412:
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(local_98 + 4));
  }
  (*(code *)PTR__objc_msgSend_1021e1c68)(uVar4,PTR_s_release_1022699b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a597d0;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_100a597d0:
  if (*(int *)local_a0.field0_0x0 != -1) {
    if (*(int *)local_a0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
      local_31 = *(int *)local_a0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100a59806;
    }
    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
  }
LAB_100a59806:
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      UNLOCK();
      if (*(int *)local_98 != 0) {
        return 1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
  return 1;
}

