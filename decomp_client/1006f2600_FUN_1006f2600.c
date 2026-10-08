
void FUN_1006f2600(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  QUrl *pQVar2;
  void *pvVar3;
  QObject *pQVar4;
  QUrl local_58 [12];
  undefined4 local_4c;
  void *local_48;
  undefined4 *local_40;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_100380f70(param_1,param_4);
  *param_1 = &PTR_FUN_102225f20;
  param_1[2] = &PTR_FUN_102226110;
  param_1[6] = &PTR_FUN_102226160;
  pvVar3 = operator_new(0x170);
  FUN_1006edb30(pvVar3,param_1,param_2,param_3,param_1);
  param_1[0xd] = pvVar3;
  FUN_1006f2750(param_1);
  FUN_1006eee60(param_1[0xd]);
  pQVar4 = (QObject *)param_1[0xd];
  if (*(int *)(pQVar4 + 0x150) != 1) {
    *(undefined4 *)(pQVar4 + 0x150) = 1;
    local_4c = 1;
    local_48 = (void *)0x0;
    local_40 = &local_4c;
    QMetaObject::activate(pQVar4,(QMetaObject *)&DAT_1021f5920,0,&local_48);
    pQVar4 = (QObject *)param_1[0xd];
  }
  pQVar2 = *(QUrl **)(pQVar4 + 0x38);
  QUrl::QUrl(local_58,param_2 + 8,0);
  CAbstractWebView::load(pQVar2);
  QUrl::~QUrl(local_58);
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

