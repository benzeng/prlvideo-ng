
long FUN_00411410(long param_1,long param_2,long *param_3,long *param_4,size_t *param_5,
                 short param_6)

{
  size_t __size;
  long lVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  char *pcVar5;
  char *__format;
  long lVar6;
  
  lVar6 = 0;
  if (param_1 != param_1 + param_2) {
    do {
      while( true ) {
        lVar1 = *param_4;
        if (lVar1 + 10U <= *param_5) break;
        __size = *param_5 + 0x400;
        pvVar4 = (void *)*param_3;
        *param_5 = __size;
        pvVar4 = realloc(pvVar4,__size);
        *param_3 = (long)pvVar4;
      }
      switch(*(undefined1 *)(lVar6 + param_1)) {
      case 0:
        goto switchD_00411487_caseD_0;
      default:
        *(undefined1 *)(*param_3 + lVar1) = *(undefined1 *)(lVar6 + param_1);
        *param_4 = lVar1 + 1;
        break;
      case 9:
        __format = "&#x9;";
        pcVar5 = "\t";
        goto LAB_004114d0;
      case 10:
        __format = "&#xA;";
        pcVar5 = "\n";
        goto LAB_004114d0;
      case 0xd:
        lVar2 = *param_3;
        *(undefined4 *)(lVar1 + lVar2) = 0x44782326;
        *(undefined2 *)((undefined4 *)(lVar1 + lVar2) + 1) = 0x3b;
        *param_4 = *param_4 + 5;
        break;
      case 0x22:
        __format = "&quot;";
        pcVar5 = "\"";
LAB_004114d0:
        if (param_6 == 0) {
          __format = pcVar5;
        }
        iVar3 = sprintf((char *)(lVar1 + *param_3),__format);
        *param_4 = iVar3 + lVar1;
        break;
      case 0x26:
        lVar2 = *param_3;
        *(undefined4 *)(lVar1 + lVar2) = 0x706d6126;
        *(undefined2 *)((undefined4 *)(lVar1 + lVar2) + 1) = 0x3b;
        *param_4 = *param_4 + 5;
        break;
      case 0x3c:
        lVar2 = *param_3;
        *(undefined4 *)(lVar1 + lVar2) = 0x3b746c26;
        *(undefined1 *)((undefined4 *)(lVar1 + lVar2) + 1) = 0;
        *param_4 = *param_4 + 4;
        break;
      case 0x3e:
        lVar2 = *param_3;
        *(undefined4 *)(lVar1 + lVar2) = 0x3b746726;
        *(undefined1 *)((undefined4 *)(lVar1 + lVar2) + 1) = 0;
        *param_4 = *param_4 + 4;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != (param_1 + param_2) - param_1);
  }
switchD_00411487_caseD_0:
  return *param_3;
}

