
void FUN_10058e860(QObject *param_1,QObject *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 *param_6)

{
  QObject *pQVar1;
  int *piVar2;
  char cVar3;
  CWindowResizeController *pCVar4;
  CDataProvider *pCVar5;
  CWidgetMapper *this;
  void *pvVar6;
  
  QObject::QObject(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_10221d550;
  *(QObject **)(param_1 + 0x10) = param_2;
  pQVar1 = param_1 + 0x18;
  FUN_10059e450(pQVar1,param_3,param_2);
  FUN_100599b80((CMappingController *)(param_1 + 0x78),pQVar1,param_2);
  pCVar4 = operator_new(0x88);
  CWindowResizeController::CWindowResizeController(pCVar4,param_2,param_2,0);
  *(CWindowResizeController **)(param_1 + 0xa8) = pCVar4;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  param_1[0xb8] = (QObject)0x0;
  *(undefined4 *)(param_1 + 0xbc) = param_4;
  *(undefined4 *)(param_1 + 0xc0) = param_5;
  piVar2 = (int *)*param_6;
  *(int **)(param_1 + 200) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  pCVar5 = operator_new(0x20);
  FUN_100595390(pCVar5,pQVar1,param_1);
  *(CDataProvider **)(param_1 + 0x98) = pCVar5;
  this = operator_new(0x48);
  CWidgetMapper::CWidgetMapper
            (this,(CMappingController *)(param_1 + 0x78),pCVar5,(CWidgetIniter *)0x0,param_1);
  *(CWidgetMapper **)(param_1 + 0xa0) = this;
  FUN_10058ec20(param_1);
  FUN_10058f070(param_1);
  pvVar6 = operator_new(0x50);
  FUN_100528710(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
  FUN_10058f640(param_1,pvVar6);
  pvVar6 = operator_new(0x50);
  FUN_100532230(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
  FUN_10058f640(param_1,pvVar6);
  pvVar6 = operator_new(0x58);
  FUN_100537060(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
  FUN_10058f640(param_1,pvVar6);
  cVar3 = FUN_100d80630(1);
  if (cVar3 == '\0') {
    pvVar6 = operator_new(0x50);
    FUN_10053d930(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
    FUN_10058f640(param_1,pvVar6);
  }
  cVar3 = FUN_1001756c0(0x13);
  if (cVar3 != '\0') {
    pvVar6 = operator_new(0x50);
    FUN_10054b610(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
    FUN_10058f640(param_1,pvVar6);
  }
  pvVar6 = operator_new(0x50);
  FUN_100545150(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
  FUN_10058f640(param_1,pvVar6);
  QMacToolBar::addStandardItem(*(undefined8 *)(param_1 + 0xd0),2);
  pvVar6 = operator_new(0x50);
  FUN_100578a00(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
  FUN_10058f640(param_1,pvVar6);
  pvVar6 = operator_new(0x50);
  FUN_10054eb60(pvVar6,pQVar1,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0xb0));
  FUN_10058f640(param_1,pvVar6);
  return;
}

