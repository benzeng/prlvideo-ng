
int _xmlTextReaderPreservePattern(long param_1,long param_2,undefined8 param_3)

{
  xmlGenericErrorFunc pxVar1;
  long lVar2;
  undefined8 uVar3;
  xmlGenericErrorFunc *ppxVar4;
  void **ppvVar5;
  long lVar6;
  int local_44;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    local_44 = -1;
  }
  else {
    lVar2 = _xmlPatterncompile(param_2,*(undefined8 *)(param_1 + 0xa0),0,param_3);
    if (lVar2 == 0) {
      local_44 = -1;
    }
    else {
      if (*(int *)(param_1 + 0x130) < 1) {
        *(undefined4 *)(param_1 + 0x130) = 4;
        uVar3 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x130) * 8);
        *(undefined8 *)(param_1 + 0x138) = uVar3;
        if (*(long *)(param_1 + 0x138) == 0) {
          ppxVar4 = ___xmlGenericError();
          pxVar1 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar5,"xmlMalloc failed !\n");
          return -1;
        }
      }
      if (*(int *)(param_1 + 0x130) <= *(int *)(param_1 + 300)) {
        *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) * 2;
        lVar6 = (*(code *)_xmlRealloc)
                          (*(undefined8 *)(param_1 + 0x138),(long)*(int *)(param_1 + 0x130) * 8);
        if (lVar6 == 0) {
          ppxVar4 = ___xmlGenericError();
          pxVar1 = *ppxVar4;
          ppvVar5 = ___xmlGenericErrorContext();
          (*pxVar1)(*ppvVar5,"xmlRealloc failed !\n");
          *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) / 2;
          return -1;
        }
        *(long *)(param_1 + 0x138) = lVar6;
      }
      *(long *)(*(long *)(param_1 + 0x138) + (long)*(int *)(param_1 + 300) * 8) = lVar2;
      local_44 = *(int *)(param_1 + 300);
      *(int *)(param_1 + 300) = local_44 + 1;
    }
  }
  return local_44;
}

