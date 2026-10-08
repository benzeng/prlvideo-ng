
int * FUN_10091eb61(long param_1,int param_2,xmlChar *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  xmlHashTablePtr pxVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  int *local_68;
  int local_1c;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (*plVar1 == 0) {
    FUN_10091c652(param_1,"xmlSchemaBucketCreate","no main schema on constructor");
    local_68 = (int *)0x0;
  }
  else {
    lVar2 = *plVar1;
    local_68 = (int *)(*(code *)_xmlMalloc)(0x58);
    if (local_68 == (int *)0x0) {
      FUN_10091b97e(0,"allocating schema bucket",0);
      local_68 = (int *)0x0;
    }
    else {
      piVar7 = local_68;
      for (lVar6 = 0x58; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined1 *)piVar7 = 0;
        piVar7 = (int *)((long)piVar7 + 1);
      }
      *(xmlChar **)(local_68 + 6) = param_3;
      *local_68 = param_2;
      if ((*(long *)(*(long *)(param_1 + 0x30) + 0x10) == 0) ||
         (*(int *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + 8) < 1)) {
        if ((param_2 == 2) || (param_2 == 3)) {
          FUN_10091c652(param_1,"xmlSchemaBucketCreate",
                        "first bucket but it\'s an include or redefine");
          FUN_10091ea5d(local_68);
          return (int *)0x0;
        }
        *local_68 = 0;
        *(long *)(local_68 + 0x14) = lVar2;
      }
      else {
        if (param_2 == 0) {
          FUN_10091c652(param_1,"xmlSchemaBucketCreate","main bucket but it\'s not the first one");
          FUN_10091ea5d(local_68);
          return (int *)0x0;
        }
        if (param_2 == 1) {
          uVar5 = FUN_10091e6d9(param_1);
          *(undefined8 *)(local_68 + 0x14) = uVar5;
          if (*(long *)(local_68 + 0x14) == 0) {
            FUN_10091ea5d(local_68);
            return (int *)0x0;
          }
        }
      }
      if ((param_2 == 0) || (param_2 == 1)) {
        if (*(long *)(lVar2 + 0x60) == 0) {
          pxVar4 = _xmlHashCreateDict(5,(xmlDictPtr)plVar1[1]);
          *(xmlHashTablePtr *)(lVar2 + 0x60) = pxVar4;
          if (*(long *)(lVar2 + 0x60) == 0) {
            FUN_10091ea5d(local_68);
            return (int *)0x0;
          }
        }
        if (param_3 == (xmlChar *)0x0) {
          local_1c = _xmlHashAddEntry(*(xmlHashTablePtr *)(lVar2 + 0x60),(xmlChar *)"##",local_68);
        }
        else {
          local_1c = _xmlHashAddEntry(*(xmlHashTablePtr *)(lVar2 + 0x60),param_3,local_68);
        }
        if (local_1c != 0) {
          FUN_10091c652(param_1,"xmlSchemaBucketCreate",
                        "failed to add the schema bucket to the hash");
          FUN_10091ea5d(local_68);
          return (int *)0x0;
        }
      }
      else {
        if ((*(int *)plVar1[3] == 0) || (*(int *)plVar1[3] == 1)) {
          *(long *)(local_68 + 0x14) = plVar1[3];
        }
        else {
          *(undefined8 *)(local_68 + 0x14) = *(undefined8 *)(plVar1[3] + 0x50);
        }
        if (*(long *)(lVar2 + 0x80) == 0) {
          uVar5 = FUN_10091e82d();
          *(undefined8 *)(lVar2 + 0x80) = uVar5;
          if (*(long *)(lVar2 + 0x80) == 0) {
            FUN_10091ea5d(local_68);
            return (int *)0x0;
          }
        }
        FUN_10091e8e0(*(undefined8 *)(lVar2 + 0x80),local_68);
      }
      iVar3 = FUN_10091e8e0(plVar1[2],local_68);
      if (iVar3 == -1) {
        local_68 = (int *)0x0;
      }
    }
  }
  return local_68;
}

