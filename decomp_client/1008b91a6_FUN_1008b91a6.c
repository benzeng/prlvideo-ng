
void FUN_1008b91a6(xmlBufferPtr param_1,uint *param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == (uint *)0x0) {
    return;
  }
  if (param_3 != 0) {
    _xmlBufferWriteChar(param_1,"(");
  }
  uVar1 = *param_2;
  if (uVar1 == 2) {
    if (*(long *)(param_2 + 10) != 0) {
      _xmlBufferWriteCHAR(param_1,*(xmlChar **)(param_2 + 10));
      _xmlBufferWriteChar(param_1,":");
    }
    _xmlBufferWriteCHAR(param_1,*(xmlChar **)(param_2 + 2));
    goto LAB_1008b9210;
  }
  if (uVar1 < 3) {
    if (uVar1 == 1) {
      _xmlBufferWriteChar(param_1,"#PCDATA");
      goto LAB_1008b9210;
    }
  }
  else {
    if (uVar1 == 3) {
      if ((**(int **)(param_2 + 4) == 4) || (**(int **)(param_2 + 4) == 3)) {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 4),1);
      }
      else {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 4),0);
      }
      _xmlBufferWriteChar(param_1," , ");
      if ((**(int **)(param_2 + 6) == 4) ||
         ((**(int **)(param_2 + 6) == 3 && (*(int *)(*(long *)(param_2 + 6) + 4) != 1)))) {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 6),1);
      }
      else {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 6),0);
      }
      goto LAB_1008b9210;
    }
    if (uVar1 == 4) {
      if ((**(int **)(param_2 + 4) == 4) || (**(int **)(param_2 + 4) == 3)) {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 4),1);
      }
      else {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 4),0);
      }
      _xmlBufferWriteChar(param_1," | ");
      if ((**(int **)(param_2 + 6) == 3) ||
         ((**(int **)(param_2 + 6) == 4 && (*(int *)(*(long *)(param_2 + 6) + 4) != 1)))) {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 6),1);
      }
      else {
        FUN_1008b91a6(param_1,*(undefined8 *)(param_2 + 6),0);
      }
      goto LAB_1008b9210;
    }
  }
  FUN_1008b74a8(0,1,"Internal: ELEMENT content corrupted invalid type\n",0);
LAB_1008b9210:
  if (param_3 != 0) {
    _xmlBufferWriteChar(param_1,")");
  }
  uVar1 = param_2[1];
  if (uVar1 == 2) {
    _xmlBufferWriteChar(param_1,"?");
  }
  else if (2 < uVar1) {
    if (uVar1 == 3) {
      _xmlBufferWriteChar(param_1,"*");
    }
    else if (uVar1 == 4) {
      _xmlBufferWriteChar(param_1,"+");
    }
  }
  return;
}

