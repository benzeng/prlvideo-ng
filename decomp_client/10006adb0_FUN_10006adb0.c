
undefined8 FUN_10006adb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  QEvent *pQVar6;
  QWidget *pQVar7;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar5 = param_4;
  if (((*(long *)(param_3 + 0x28) != 0) && (*(int *)(*(long *)(param_3 + 0x28) + 4) != 0)) &&
     (*(long *)(param_3 + 0x30) != 0)) {
    lVar1 = *(long *)(param_3 + 0x20);
    lVar2 = *(long *)(*(long *)(lVar1 + 0x18) + 0x48);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 4) != 0)) &&
       ((*(long *)(*(long *)(lVar1 + 0x18) + 0x50) != 0 && (*(int *)(lVar1 + 0x48) == 2)))) {
      uVar3 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_4,PTR_s_type_102269648);
      uVar5 = 0;
      if ((uVar3 & 0xfffffffffffffffe) != 8) {
        local_30 = WidgetUtils::cursorPos();
        lVar2 = *(long *)(*(long *)(lVar1 + 0x18) + 0x48);
        pQVar7 = (QWidget *)0x0;
        if ((lVar2 != 0) && (pQVar7 = (QWidget *)0x0, *(int *)(lVar2 + 4) != 0)) {
          pQVar7 = *(QWidget **)(*(long *)(lVar1 + 0x18) + 0x50);
        }
        local_28 = param_2;
        local_40 = MacUtils::mapFromGlobal(pQVar7,(QPointF *)&local_30);
        local_38 = param_2;
        plVar4 = (long *)(*(code *)PTR__objc_msgSend_1021e1c68)
                                   (param_4,PTR_s_toQMouseEventWithPos_globalPos__102269cc8,
                                    &local_40,(QPointF *)&local_30);
        lVar2 = *(long *)(*(long *)(lVar1 + 0x18) + 0x48);
        pQVar6 = (QEvent *)0x0;
        if ((lVar2 != 0) && (pQVar6 = (QEvent *)0x0, *(int *)(lVar2 + 4) != 0)) {
          pQVar6 = *(QEvent **)(*(long *)(lVar1 + 0x18) + 0x50);
        }
        if (plVar4 != (long *)0x0) {
          *(byte *)((long)plVar4 + 0x12) = *(byte *)((long)plVar4 + 0x12) & 0xfd;
        }
        if (*(QObject **)PTR_self_1021e1388 != (QObject *)0x0) {
          QCoreApplication::notifyInternal(*(QObject **)PTR_self_1021e1388,pQVar6);
        }
        uVar5 = 0;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          uVar5 = 0;
        }
      }
    }
  }
  return uVar5;
}

