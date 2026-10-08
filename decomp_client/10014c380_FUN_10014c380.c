
void FUN_10014c380(QStyleOption *param_1)

{
  QArrayData *pQVar1;
  
  QBrush::~QBrush((QBrush *)(param_1 + 0xb8));
  pQVar1 = *(QArrayData **)(param_1 + 0xa8);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10014c3d0;
      pQVar1 = *(QArrayData **)(param_1 + 0xa8);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10014c3d0:
  QIcon::~QIcon((QIcon *)(param_1 + 0xa0));
  QLocale::~QLocale((QLocale *)(param_1 + 0x70));
  QFont::~QFont((QFont *)(param_1 + 0x58));
  QStyleOption::~QStyleOption(param_1);
  return;
}

