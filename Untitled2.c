t=a[i];
      //for(j=i-1; j>=0; j--)
        j=i-1;
        while(j>=0 &&
              a[j]>t)
        {
            //t=a[i];
            a[j+1]=a[j];

            j--;
        }
       a[j+1]=t;
