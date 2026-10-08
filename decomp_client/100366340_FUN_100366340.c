
void FUN_100366340(long param_1)

{
  long lVar1;
  QWidget *pQVar2;
  char cVar3;
  int iVar4;
  int in_stack_00000018;
  QVariant local_30;
  
  cVar3 = FUN_10035dcf0(*(undefined8 *)(param_1 + 8),2);
  if (cVar3 == '\0') {
    cVar3 = FUN_10035ddf0(*(undefined8 *)(param_1 + 8),0);
    if (cVar3 != '\0') {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x48);
      if (((lVar1 != 0) && (*(int *)(lVar1 + 4) != 0)) &&
         (pQVar2 = *(QWidget **)(*(long *)(param_1 + 8) + 0x50), pQVar2 != (QWidget *)0x0)) {
        QObject::property((char *)&local_30);
        iVar4 = QVariant::toUInt((bool *)&local_30);
        QVariant::~QVariant(&local_30);
        if (iVar4 == in_stack_00000018) {
          WidgetUtils::centralizeCursorForWidget(pQVar2);
        }
      }
    }
  }
  return;
}

