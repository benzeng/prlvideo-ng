
void FUN_1005d5230(long *param_1,QDomElement *param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  QDomElement::QDomElement((QDomElement *)(plVar2 + 2),param_2);
  QDomElement::QDomElement((QDomElement *)(plVar2 + 3),param_2 + 8);
  plVar2[1] = (long)param_1;
  lVar1 = *param_1;
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *param_1 = (long)plVar2;
  param_1[2] = param_1[2] + 1;
  return;
}

