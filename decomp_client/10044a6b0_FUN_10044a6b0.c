
void FUN_10044a6b0(long param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  QString *pQVar5;
  QWidget *pQVar6;
  QArrayData *pQVar7;
  Data *pDVar8;
  QVariant local_68;
  Data *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QObject::objectName();
  local_48 = (QArrayData *)QString::fromAscii_helper("qt_",3);
  cVar2 = QString::startsWith(&local_40,&local_48,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044a729;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10044a729:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044a759;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10044a759:
  if (cVar2 != '\0') {
    return;
  }
  lVar3 = (**(code **)(*param_2 + 8))(param_2,"CPrlFileDevSelectorWidget");
  if (((lVar3 != 0) && (lVar3 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x28)), lVar3 != 0)) &&
     (lVar3 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1470), lVar3 != 0)) {
    uVar4 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x28));
    FUN_10015a320(uVar4);
    CDispUser::getUserWorkspace();
    CDispUserWorkspace::getUserHomeFolder();
    pQVar5 = (QString *)CPrlFileDevSelectorWidget::getFileDevSelector();
    CPrlFileDevSelector::setServerUserHomeFolder(pQVar5);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10044a80d;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10044a80d:
  (**(code **)(**(long **)(param_1 + 0x10) + 0x1e0))(*(long **)(param_1 + 0x10),param_2);
  QObject::property((char *)&local_68);
  QVariant::toStringList();
  cVar2 = FUN_1003bc0b0(&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10044a8f5;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar3 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar8 = local_58 + (long)iVar1 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar8;
        if (*(int *)pQVar7 == 0) {
LAB_10044a8d0:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar8;
            goto LAB_10044a8d0;
          }
        }
        pDVar8 = pDVar8 + -8;
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0);
    }
    QListData::dispose(local_58);
  }
LAB_10044a8f5:
  QVariant::~QVariant(&local_68);
  if (cVar2 != '\0') {
    pQVar6 = (QWidget *)FUN_1003b0ae0(*(undefined8 *)(param_1 + 0x28));
    CWidgetMapper::addMapping(pQVar6);
  }
  return;
}

