
void _xmlSnprintfElementContent(char *buf,int size,xmlElementContentPtr content,int englob)

{
  char cVar1;
  xmlElementContentType xVar2;
  xmlElementContentOccur xVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  
  if (content != (xmlElementContentPtr)0x0) {
    lVar6 = -1;
    pcVar8 = buf;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    iVar4 = ~(uint)lVar6 - 1;
    if (size - iVar4 < 0x32) {
      if ((4 < size - iVar4) && (buf[(long)iVar4 + -1] != '.')) {
        uVar7 = 0xffffffffffffffff;
        pcVar8 = buf;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        builtin_strncpy(buf + (~uVar7 - 1)," ...",5);
      }
    }
    else {
      if (englob != 0) {
        uVar7 = 0xffffffffffffffff;
        pcVar8 = buf;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        (buf + (~uVar7 - 1))[0] = '(';
        (buf + (~uVar7 - 1))[1] = '\0';
      }
      xVar2 = content->type;
      if (xVar2 == XML_ELEMENT_CONTENT_ELEMENT) {
        if (content->prefix != (xmlChar *)0x0) {
          iVar5 = _xmlStrlen(content->prefix);
          if (size - iVar4 < iVar5 + 10) {
            uVar7 = 0xffffffffffffffff;
            pcVar8 = buf;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            builtin_strncpy(buf + (~uVar7 - 1)," ...",5);
            return;
          }
          _strcat(buf,(char *)content->prefix);
          _strcat(buf,":");
        }
        iVar5 = _xmlStrlen(content->name);
        if (size - iVar4 < iVar5 + 10) {
          _strcat(buf," ...");
          return;
        }
        if (content->name != (xmlChar *)0x0) {
          _strcat(buf,(char *)content->name);
        }
      }
      else if (xVar2 < XML_ELEMENT_CONTENT_SEQ) {
        if (xVar2 == XML_ELEMENT_CONTENT_PCDATA) {
          uVar7 = 0xffffffffffffffff;
          pcVar8 = buf;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (cVar1 != '\0');
          builtin_strncpy(buf + (~uVar7 - 1),"#PCDATA",8);
        }
      }
      else if (xVar2 == XML_ELEMENT_CONTENT_SEQ) {
        if ((content->c1->type == XML_ELEMENT_CONTENT_OR) ||
           (content->c1->type == XML_ELEMENT_CONTENT_SEQ)) {
          _xmlSnprintfElementContent(buf,size,content->c1,1);
        }
        else {
          _xmlSnprintfElementContent(buf,size,content->c1,0);
        }
        lVar6 = -1;
        pcVar8 = buf;
        do {
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~(uint)lVar6 - 1;
        if (size - iVar4 < 0x32) {
          if (size - iVar4 < 5) {
            return;
          }
          if (buf[(long)iVar4 + -1] == '.') {
            return;
          }
          _strcat(buf," ...");
          return;
        }
        _strcat(buf," , ");
        if (((content->c2->type == XML_ELEMENT_CONTENT_OR) ||
            (content->c2->ocur != XML_ELEMENT_CONTENT_ONCE)) &&
           (content->c2->type != XML_ELEMENT_CONTENT_ELEMENT)) {
          _xmlSnprintfElementContent(buf,size,content->c2,1);
        }
        else {
          _xmlSnprintfElementContent(buf,size,content->c2,0);
        }
      }
      else if (xVar2 == XML_ELEMENT_CONTENT_OR) {
        if ((content->c1->type == XML_ELEMENT_CONTENT_OR) ||
           (content->c1->type == XML_ELEMENT_CONTENT_SEQ)) {
          _xmlSnprintfElementContent(buf,size,content->c1,1);
        }
        else {
          _xmlSnprintfElementContent(buf,size,content->c1,0);
        }
        lVar6 = -1;
        pcVar8 = buf;
        do {
          if (lVar6 == 0) break;
          lVar6 = lVar6 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        iVar4 = ~(uint)lVar6 - 1;
        if (size - iVar4 < 0x32) {
          if (size - iVar4 < 5) {
            return;
          }
          if (buf[(long)iVar4 + -1] == '.') {
            return;
          }
          _strcat(buf," ...");
          return;
        }
        _strcat(buf," | ");
        if (((content->c2->type == XML_ELEMENT_CONTENT_SEQ) ||
            (content->c2->ocur != XML_ELEMENT_CONTENT_ONCE)) &&
           (content->c2->type != XML_ELEMENT_CONTENT_ELEMENT)) {
          _xmlSnprintfElementContent(buf,size,content->c2,1);
        }
        else {
          _xmlSnprintfElementContent(buf,size,content->c2,0);
        }
      }
      if (englob != 0) {
        _strcat(buf,")");
      }
      xVar3 = content->ocur;
      if (xVar3 == XML_ELEMENT_CONTENT_OPT) {
        _strcat(buf,"?");
      }
      else if (XML_ELEMENT_CONTENT_OPT < xVar3) {
        if (xVar3 == XML_ELEMENT_CONTENT_MULT) {
          _strcat(buf,"*");
        }
        else if (xVar3 == XML_ELEMENT_CONTENT_PLUS) {
          _strcat(buf,"+");
        }
      }
    }
  }
  return;
}

