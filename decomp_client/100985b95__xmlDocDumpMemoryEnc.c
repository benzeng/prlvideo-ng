
void _xmlDocDumpMemoryEnc
               (xmlDocPtr out_doc,xmlChar **doc_txt_ptr,int *doc_txt_len,char *txt_encoding)

{
  _xmlDocDumpFormatMemoryEnc(out_doc,doc_txt_ptr,doc_txt_len,txt_encoding,0);
  return;
}

