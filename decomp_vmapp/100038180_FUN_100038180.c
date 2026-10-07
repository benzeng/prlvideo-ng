
undefined1 FUN_100038180(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  bool bVar2;
  QArrayData *pQVar3;
  int iVar4;
  undefined4 uVar5;
  QMapNodeBase *pQVar6;
  ulong *puVar7;
  QMapNodeBase *pQVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined4 local_bc;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  QArrayData *local_78;
  QArrayData *local_70;
  undefined1 local_68 [32];
  QArrayData *local_48;
  QArrayData *local_40;
  bool local_31;
  
  local_bc = 4;
  iVar4 = FUN_10078cca0(local_b8,0x50);
  if (iVar4 != 0) {
    return 0;
  }
  iVar4 = FUN_10078cd90(local_b8,&local_bc,4,0x200d);
  if ((iVar4 != 0) || (iVar4 = FUN_10078cca0(local_98,0), iVar4 != 0)) goto LAB_100038655;
  if (2 < DAT_1011b55f8) {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"<<< Printers table");
  }
  pQVar6 = (QMapNodeBase *)*param_2;
  if (*(int *)pQVar6 == 0) {
    pQVar6 = (QMapNodeBase *)QMapDataBase::createData();
    if (*(long *)(*param_2 + 0x10) != 0) {
      puVar7 = (ulong *)FUN_1000137b0(*(long *)(*param_2 + 0x10),pQVar6);
      *(ulong **)(pQVar6 + 0x10) = puVar7;
      *puVar7 = *puVar7 & 3 | (ulong)(pQVar6 + 8);
      QMapDataBase::recalcMostLeftNode();
    }
  }
  else if (*(int *)pQVar6 != -1) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    local_31 = *(int *)pQVar6 != 0;
    UNLOCK();
    pQVar6 = (QMapNodeBase *)*param_2;
  }
  if (*(long *)(pQVar6 + 0x10) == 0) {
    pQVar8 = pQVar6 + 8;
  }
  else {
    pQVar8 = *(QMapNodeBase **)(pQVar6 + 0x20);
  }
  do {
    if (pQVar8 == pQVar6 + 8) {
      if (*(int *)pQVar6 != -1) {
        if (*(int *)pQVar6 != 0) {
          LOCK();
          *(int *)pQVar6 = *(int *)pQVar6 + -1;
          local_31 = *(int *)pQVar6 != 0;
          UNLOCK();
          if (local_31) goto LAB_100038559;
        }
        if (*(long *)(pQVar6 + 0x10) != 0) {
          FUN_100013720();
          QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
        }
        QMapDataBase::freeData((QMapDataBase *)pQVar6);
      }
LAB_100038559:
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("PRINTING_TOOL","vm",3,"Printers table >>>");
      }
      uVar9 = FUN_10078cc60(local_98);
      uVar5 = FUN_10078cc70(local_98);
      iVar4 = FUN_10078cd90(local_b8,uVar9,uVar5,0x200f);
      FUN_10078cf00(local_98);
      if (iVar4 != 0) goto LAB_100038655;
      FUN_100038080(param_1,local_b8,param_3);
      uVar10 = 1;
      goto LAB_100038657;
    }
    pQVar8 = (QMapNodeBase *)QMapNodeBase::nextNode();
    QString::toUtf8();
    QString::toUtf8();
    iVar4 = FUN_10078cca0(local_68,0);
    if (iVar4 == 0) {
      iVar4 = FUN_10078cd90(local_68,local_40 + *(long *)(local_40 + 0x10),
                            *(undefined4 *)(local_40 + 4),0x200a);
      if (iVar4 == 0) {
        iVar4 = FUN_10078cd90(local_68,local_48 + *(long *)(local_48 + 0x10),
                              *(undefined4 *)(local_48 + 4),0x200b);
        if (iVar4 == 0) {
          uVar9 = FUN_10078cc60(local_68);
          uVar5 = FUN_10078cc70(local_68);
          iVar4 = FUN_10078cd90(local_98,uVar9,uVar5,0x200c);
          if (iVar4 == 0) {
            bVar2 = true;
            if (2 < DAT_1011b55f8) {
              QString::toUtf8();
              pQVar3 = local_70;
              lVar1 = *(long *)(local_70 + 0x10);
              QString::toUtf8();
              FUN_1008e3970("PRINTING_TOOL","vm",3,"    Printer Id = %s, Name = %s",pQVar3 + lVar1,
                            local_78 + *(long *)(local_78 + 0x10));
              if (*(int *)local_78 != -1) {
                if (*(int *)local_78 != 0) {
                  LOCK();
                  *(int *)local_78 = *(int *)local_78 + -1;
                  local_31 = *(int *)local_78 != 0;
                  UNLOCK();
                  if (local_31) goto LAB_100038430;
                }
                QArrayData::deallocate(local_78,1,8);
              }
LAB_100038430:
              if (*(int *)local_70 != -1) {
                if (*(int *)local_70 != 0) {
                  LOCK();
                  *(int *)local_70 = *(int *)local_70 + -1;
                  local_31 = *(int *)local_70 != 0;
                  UNLOCK();
                  if (local_31) goto LAB_100038460;
                }
                QArrayData::deallocate(local_70,1,8);
              }
            }
          }
          else {
            bVar2 = false;
          }
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = false;
      }
LAB_100038460:
      FUN_10078cf00(local_68);
    }
    else {
      bVar2 = false;
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if (local_31) goto LAB_100038499;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_100038499:
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if (local_31) goto LAB_1000384c9;
      }
      QArrayData::deallocate(local_40,1,8);
    }
LAB_1000384c9:
  } while (bVar2);
  if (DAT_1011b55f8 < 3) {
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        iVar4 = *(int *)pQVar6;
        UNLOCK();
LAB_10003861c:
        local_31 = iVar4 != 0;
        if (local_31) goto LAB_100038649;
      }
LAB_100038622:
      if (*(long *)(pQVar6 + 0x10) != 0) {
        FUN_100013720();
        QMapDataBase::freeTree(pQVar6,(int)*(undefined8 *)(pQVar6 + 0x10));
      }
      QMapDataBase::freeData((QMapDataBase *)pQVar6);
    }
  }
  else {
    FUN_1008e3970("PRINTING_TOOL","vm",3,"Printers table >>> (Can\'t form, error occured)");
    if (*(int *)pQVar6 != -1) {
      if (*(int *)pQVar6 != 0) {
        LOCK();
        *(int *)pQVar6 = *(int *)pQVar6 + -1;
        iVar4 = *(int *)pQVar6;
        UNLOCK();
        goto LAB_10003861c;
      }
      goto LAB_100038622;
    }
  }
LAB_100038649:
  FUN_10078cf00(local_98);
LAB_100038655:
  uVar10 = 0;
LAB_100038657:
  FUN_10078cf00(local_b8);
  return uVar10;
}

