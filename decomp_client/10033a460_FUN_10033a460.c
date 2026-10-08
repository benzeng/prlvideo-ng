
void FUN_10033a460(QGraphicsScene *param_1)

{
  Data *pDVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_1021fcd90;
  pDVar1 = *(Data **)(param_1 + 0x10);
  if (*(int *)pDVar1 != -1) {
    if (*(int *)pDVar1 != 0) {
      LOCK();
      *(int *)pDVar1 = *(int *)pDVar1 + -1;
      UNLOCK();
      if (*(int *)pDVar1 != 0) goto LAB_10033a4a2;
      pDVar1 = *(Data **)(param_1 + 0x10);
    }
    QListData::dispose(pDVar1);
  }
LAB_10033a4a2:
  QGraphicsScene::~QGraphicsScene(param_1);
  return;
}

