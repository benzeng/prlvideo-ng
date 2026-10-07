
void FUN_1004bb910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  double *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  lVar1 = _HIShapeCreateMutable();
  if (lVar1 != 0) {
    uVar2 = (*DAT_1011ccc98)(param_4);
    pauVar3 = (undefined1 (*) [16])(*DAT_1011ccca8)(uVar2);
    while (pauVar3 != (undefined1 (*) [16])0x0) {
      auVar4._0_8_ = *(double *)*pauVar3 - *param_5;
      auVar4._8_8_ = (param_5[3] - (*(double *)(*pauVar3 + 8) - param_5[1])) - SUB168(pauVar3[1],8);
      auVar5._8_8_ = param_1;
      auVar5._0_8_ = param_1;
      auVar4 = divpd(auVar4,auVar5);
      *pauVar3 = auVar4;
      auVar5 = divpd(pauVar3[1],auVar5);
      pauVar3[1] = auVar5;
      _HIShapeUnionWithRect(lVar1,pauVar3);
      pauVar3 = (undefined1 (*) [16])(*DAT_1011ccca8)(uVar2);
    }
    (*DAT_1011ccca0)(uVar2);
    _HIShapeReplacePathInCGContext(lVar1,param_3);
    _CGContextClip(param_3);
    _CFRelease(lVar1);
    return;
  }
  return;
}

