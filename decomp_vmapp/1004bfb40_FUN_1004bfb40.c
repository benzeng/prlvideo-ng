
undefined8 FUN_1004bfb40(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = _HIShapeCreateMutable();
  if (*param_1 != 0) {
    uVar2 = (*DAT_1011ccc98)();
    while( true ) {
      lVar3 = (*DAT_1011ccca8)(uVar2);
      if (lVar3 == 0) break;
      _HIShapeUnionWithRect(uVar1,lVar3);
    }
    (*DAT_1011ccca0)(uVar2);
  }
  return uVar1;
}

