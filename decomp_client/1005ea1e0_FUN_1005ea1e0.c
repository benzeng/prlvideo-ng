
void FUN_1005ea1e0(long param_1,long param_2)

{
  QUrl *pQVar1;
  undefined8 uVar2;
  undefined1 local_a0 [48];
  undefined1 local_70 [40];
  undefined1 local_48 [40];
  QUrl local_20 [8];
  
  if (param_2 != 0) {
    FUN_10075bd60(param_1);
    pQVar1 = (QUrl *)FUN_10075bd70(param_1);
    if (pQVar1 != (QUrl *)0x0) {
      FUN_1005e7db0(*(undefined8 *)(param_1 + 0x48),pQVar1);
      uVar2 = FUN_1005ec990(param_1 + 0x40);
      FUN_1005b69c0(local_a0,uVar2);
      QUrl::QUrl(local_20,local_70,0);
      CAbstractWebView::load(pQVar1);
      QUrl::~QUrl(local_20);
      FUN_100252c80(local_48);
      FUN_100252e70(local_a0);
    }
  }
  return;
}

