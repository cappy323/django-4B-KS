from django.http import HttpResponse

def index(request):
    return HttpResponse("Witaj na leckji Pracownia Nowoczesnych Technologii.")