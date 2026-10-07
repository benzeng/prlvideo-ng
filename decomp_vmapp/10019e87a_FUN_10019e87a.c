
void FUN_10019e87a(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  xmlChar *pxVar3;
  int iVar4;
  xmlChar *pxVar5;
  undefined8 *local_20;
  
  lVar1 = *(long *)(param_2 + 0x40);
  if (*(long *)(param_2 + 0x28) == 0) {
    FUN_10019e49b(param_1,0x1395,"Node has no parent\n");
  }
  if (*(long *)(param_2 + 0x40) == 0) {
    FUN_10019e49b(param_1,0x1396,"Node has no doc\n");
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x98);
    if ((lVar2 == 0) && (*(int *)(param_1 + 0x98) == 0)) {
      *(undefined4 *)(param_1 + 0x98) = 1;
    }
    if (*(long *)(param_1 + 0x78) == 0) {
      *(long *)(param_1 + 0x78) = lVar1;
    }
    if (*(long *)(param_1 + 0x88) == 0) {
      *(long *)(param_1 + 0x88) = lVar2;
    }
  }
  if (((*(long *)(param_2 + 0x28) != 0) &&
      (*(long *)(param_2 + 0x40) != *(long *)(*(long *)(param_2 + 0x28) + 0x40))) &&
     (iVar4 = _xmlStrEqual(*(xmlChar **)(param_2 + 0x10),(xmlChar *)"pseudoroot"), iVar4 == 0)) {
    FUN_10019e49b(param_1,0x1399,"Node doc differs from parent\'s one\n");
  }
  if (*(long *)(param_2 + 0x38) == 0) {
    if (*(int *)(param_2 + 8) == 2) {
      if ((*(long *)(param_2 + 0x28) != 0) &&
         (*(long *)(*(long *)(param_2 + 0x28) + 0x58) != param_2)) {
        FUN_10019e49b(param_1,0x139a,"Attr has no prev and not first of attr list\n");
      }
    }
    else if ((*(long *)(param_2 + 0x28) != 0) &&
            (*(long *)(*(long *)(param_2 + 0x28) + 0x18) != param_2)) {
      FUN_10019e49b(param_1,0x139a,"Node has no prev and not first of parent list\n");
    }
  }
  else if (*(long *)(*(long *)(param_2 + 0x38) + 0x30) != param_2) {
    FUN_10019e49b(param_1,0x139b,"Node prev->next : back link wrong\n");
  }
  if (*(long *)(param_2 + 0x30) == 0) {
    if (((*(long *)(param_2 + 0x28) != 0) && (*(int *)(param_2 + 8) != 2)) &&
       (*(long *)(*(long *)(param_2 + 0x28) + 0x20) != param_2)) {
      FUN_10019e49b(param_1,0x139c,"Node has no next and not last of parent list\n");
    }
  }
  else {
    if (*(long *)(*(long *)(param_2 + 0x30) + 0x38) != param_2) {
      FUN_10019e49b(param_1,0x139d,"Node next->prev : forward link wrong\n");
    }
    if (*(long *)(*(long *)(param_2 + 0x30) + 0x28) != *(long *)(param_2 + 0x28)) {
      FUN_10019e49b(param_1,0x13a5,"Node next->prev : forward link wrong\n");
    }
  }
  if (*(int *)(param_2 + 8) == 1) {
    for (local_20 = *(undefined8 **)(param_2 + 0x60); local_20 != (undefined8 *)0x0;
        local_20 = (undefined8 *)*local_20) {
      FUN_10019e6c5(param_1,param_2,local_20);
    }
    if (*(long *)(param_2 + 0x48) != 0) {
      FUN_10019e6c5(param_1,param_2,*(undefined8 *)(param_2 + 0x48));
    }
  }
  else if ((*(int *)(param_2 + 8) == 2) && (*(long *)(param_2 + 0x48) != 0)) {
    FUN_10019e6c5(param_1,param_2,*(undefined8 *)(param_2 + 0x48));
  }
  if ((((*(int *)(param_2 + 8) != 1) && (*(int *)(param_2 + 8) != 2)) &&
      ((*(int *)(param_2 + 8) != 0xf &&
       ((((*(int *)(param_2 + 8) != 0x10 && (*(int *)(param_2 + 8) != 0xe)) &&
         (*(int *)(param_2 + 8) != 0xf)) &&
        ((*(int *)(param_2 + 8) != 0xd && (*(int *)(param_2 + 8) != 9)))))))) &&
     (*(long *)(param_2 + 0x50) != 0)) {
    FUN_10019e77f(param_1,*(undefined8 *)(param_2 + 0x50));
  }
  switch(*(undefined4 *)(param_2 + 8)) {
  case 1:
  case 2:
    FUN_10019e7cc(param_1,*(undefined8 *)(param_2 + 0x10));
    break;
  case 3:
    if (((*(undefined **)(param_2 + 0x10) != &_xmlStringText) &&
        (*(char **)(param_2 + 0x10) != "textnoenc")) &&
       ((*(long *)(param_1 + 0x88) == 0 ||
        (pxVar3 = *(xmlChar **)(param_2 + 0x10),
        pxVar5 = _xmlDictLookup(*(xmlDictPtr *)(param_1 + 0x88),(xmlChar *)"nbktext",7),
        pxVar3 != pxVar5)))) {
      FUN_10019e607(param_1,0x13ac,"Text node has wrong name \'%s\'",*(undefined8 *)(param_2 + 0x10)
                   );
    }
    break;
  case 4:
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_10019e607(param_1,0x13ad,"CData section has non NULL name \'%s\'",
                    *(undefined8 *)(param_2 + 0x10));
    }
    break;
  case 7:
    FUN_10019e7cc(param_1,*(undefined8 *)(param_2 + 0x10));
    break;
  case 8:
    if (*(char **)(param_2 + 0x10) != "comment") {
      FUN_10019e607(param_1,0x13ac,"Comment node has wrong name \'%s\'",
                    *(undefined8 *)(param_2 + 0x10));
    }
  }
  return;
}

